#include <maya/MFnPlugin.h>
#include "src/deformer.h"


MStatus initializePlugin(MObject obj){
  MStatus status;

  MFnPlugin fnPlugin(obj, "IvaStival", "1.0", "Any");

  status = fnPlugin.registerNode("myBulgeDeformer", myBulgeDeformer::id, myBulgeDeformer::creator, myBulgeDeformer::initialize, MPxNode::kDeformerNode);
  if(!status){
    status.perror("registerNode");
    return status;
  }
  return MS::kSuccess;
}

MStatus uninitializePlugin(MObject obj){
    MStatus status;
    MFnPlugin fnPlugin(obj);

    status = fnPlugin.deregisterNode(myBulgeDeformer::id);
    if(!status){
      status.perror("registerNode");
      return status;
    }
    return MS::kSuccess;
}
