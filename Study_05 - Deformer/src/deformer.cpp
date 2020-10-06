#include "deformer.h"

MTypeId myBulgeDeformer::id(0x0000321);
MObject myBulgeDeformer::mAmount;

myBulgeDeformer::myBulgeDeformer(){}

myBulgeDeformer::~myBulgeDeformer(){}

void* myBulgeDeformer::creator(){
  return new myBulgeDeformer();

}

MStatus myBulgeDeformer::initialize(){
    MStatus status;

    MFnNumericAttribute nAttr;

    mAmount = nAttr.create("Amount", "Amount", MFnNumericData::kFloat);
    nAttr.setKeyable(true);
    addAttribute(mAmount);
    attributeAffects(myBulgeDeformer::mAmount, myBulgeDeformer::outputGeom);

    MGlobal::executeCommand( "makePaintable -attrType multiFloat -sm deformer myBulgeDeformer weights;" );

    return MS::kSuccess;
}


MStatus myBulgeDeformer::deform( MDataBlock& data, MItGeometry& itGeo,
        const MMatrix& localToWorldMatrix, unsigned int geomIndex ){

    MStatus status;

    MArrayDataHandle mInput = data.outputArrayValue( input, &status );

    if(!status){
      status.perror("outputArrayValue");
      return status;
    }

    status = mInput.jumpToElement(geomIndex);
    MDataHandle inputElement = mInput.outputValue(&status);
    MObject mInputGeom = inputElement.child(inputGeom).asMesh();

    MFnMesh mMesh(mInputGeom, &status);

    if(!status){
      status.perror("mMesh Error");
      return status;
    }

    MFloatVectorArray normals;
    mMesh.getVertexNormals(false, normals);

    float amount = data.inputValue(mAmount).asFloat();
    float env = data.inputValue(envelope).asFloat();

    MPoint point;
    float w;

    for(; !itGeo.isDone(); itGeo.next()){
      w = weightValue(data, geomIndex, itGeo.index());

      point = itGeo.position();

      point += normals[itGeo.index()] * amount * w * env;

      itGeo.setPosition(point);

    }


    return MS::kSuccess;

}
