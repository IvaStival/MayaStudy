#include "gaussian.h"

MTypeId Gaussian::id(0x00001234);
MObject Gaussian::gVariance;
MObject Gaussian::gHeight;
MObject Gaussian::gCenter;
MObject Gaussian::gInValue;
MObject Gaussian::gOutValue;

Gaussian::Gaussian(){}

Gaussian::~Gaussian(){}

void* Gaussian::creator(){
    return new Gaussian();
}

MStatus Gaussian::compute(const MPlug& plug, MDataBlock& data){
  MStatus status;

  if(plug != gOutValue){
    return MS::kUnknownParameter;
  }

  float inValue   = data.inputValue(gInValue, &status).asFloat();
  float variance  = data.inputValue(gVariance, &status).asFloat();
  float center    = data.inputValue(gCenter, &status).asFloat();
  float height    = data.inputValue(gHeight, &status).asFloat();

  if(variance <= 0.0f){
    variance = 0.001f;
  }

  float xb = inValue - center;
  float f = height * exp( -(xb*xb) / (2.0f*variance));

  MDataHandle output = data.outputValue(gOutValue, &status);

  if(!status){
    status.perror("output error!");
    return status;
  }

  output.setFloat(f);
  output.setClean();
  data.setClean(plug);

  return MS::kSuccess;
}

MStatus Gaussian::initialize(){
    MFnNumericAttribute nAttr;

    gOutValue = nAttr.create("outValue", "outValue", MFnNumericData::kFloat);
    nAttr.setWritable(false);
    nAttr.setStorable(false);
    addAttribute(gOutValue);

    gInValue = nAttr.create("inValue", "inValue", MFnNumericData::kFloat);
    nAttr.setKeyable(true);
    addAttribute(gInValue);
    attributeAffects(gInValue, gOutValue);

    gVariance = nAttr.create("Variance", "Variance", MFnNumericData::kFloat);
    nAttr.setKeyable(true);
    addAttribute(gVariance);
    attributeAffects(gVariance, gOutValue);

    gHeight = nAttr.create("Height", "Height", MFnNumericData::kFloat);
    nAttr.setKeyable(true);
    addAttribute(gHeight);
    attributeAffects(gHeight, gOutValue);

    gCenter = nAttr.create("Center", "Center", MFnNumericData::kFloat);
    nAttr.setKeyable(true);
    addAttribute(gCenter);
    attributeAffects(gCenter, gOutValue);

    return MS::kSuccess;

}
