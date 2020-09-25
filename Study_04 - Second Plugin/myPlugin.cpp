#include <maya/MFnPlugin.h>
#include "src/gaussian.h"

MStatus initializePlugin(MObject obj){
  MStatus status;

  MFnPlugin fnPlugin(obj, "IvaStival", "1.0", "Any");

  status = fnPlugin.registerNode("MGaussian", Gaussian::id, Gaussian::creator, Gaussian::initialize);
  if(!status){
    status.perror("registerNode");
    return status;
  }
  return MS::kSuccess;
}

MStatus uninitializePlugin(MObject obj){
    MStatus status;
    MFnPlugin fnPlugin(obj);

    status = fnPlugin.deregisterNode(Gaussian::id);
    if(!status){
      status.perror("registerNode");
      return status;
    }
    return MS::kSuccess;
}
