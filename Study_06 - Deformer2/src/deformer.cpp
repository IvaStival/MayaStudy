#include "deformer.h"

MTypeId myBlendDeformer::id(0x0000321);
MObject myBlendDeformer::mBlendMesh;
MObject myBlendDeformer::mBlendWeight;

myBlendDeformer::myBlendDeformer(){}

myBlendDeformer::~myBlendDeformer(){}

void* myBlendDeformer::creator(){
    return new myBlendDeformer();
}

MStatus myBlendDeformer::initialize(){

  MStatus status;

  MFnNumericAttribute nAttr;
  MFnTypedAttribute tAttr;

  mBlendMesh = tAttr.create("blendMesh", "blendeMesh", MFnData::kMesh);
  addAttribute(mBlendMesh);
  attributeAffects(mBlendMesh, outputGeom);

  mBlendWeight = nAttr.create("blendWeight", "blendWeight", MFnNumericData::kFloat);
  nAttr.setKeyable(true);
  nAttr.setMin(0.0);
  nAttr.setMax(1.0);
  addAttribute(mBlendWeight);
  attributeAffects(mBlendWeight, outputGeom);

  return MS::kSuccess;
}

MStatus myBlendDeformer::deform(MDataBlock& data,
                                MItGeometry& itGeo,
                                const MMatrix& localToWorldMatrix,
                                unsigned int geomIndex){

    MStatus status;

    MDataHandle handleBlendeMesh = data.inputValue(input, &status);

    if(!status){
      status.perror("Input Mesh Error.");
      return status;
    }

    MObject objBlendMesh = handleBlendeMesh.asMesh();

    if(objBlendMesh.isNull()){
      return MS::kSuccess;
    }

    MFnMesh mMesh(objBlendMesh, &status);
    if(!status){
      status.perror("Mesh Error!");
      return status;
    }
    MPointArray pointArray;
    mMesh.getPoints(pointArray);

    float blendWeight = data.inputValue(mBlendWeight).asFloat();
    float env = data.inputValue(envelope).asFloat();

    MPoint points;
    float w;

    for(;itGeo.isDone(); itGeo.next()){
      w = weightValue(data, geomIndex, itGeo.index());

      points += (pointArray[itGeo.index()] - points) * blendWeight * w * env;

      itGeo.setPosition(points);
    }

    return MS::kSuccess;
}
