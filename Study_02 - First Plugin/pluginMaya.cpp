#include <maya/MFnPlugin.h>

#include "myCommand.h"

MStatus initializePlugin(MObject obj){
  MStatus status;

  MFnPlugin fnPlugin(obj, "IvaStival", "1.0", "Any");

  status = fnPlugin.registerCommand("myCommand", MyCommand::creator);
  if(!status){
    status.perror("registerNode");
    return status;
  }
  return MS::kSuccess;
}

MStatus uninitializePlugin(MObject obj){
  MStatus status;

  MFnPlugin fnPlugin(obj);
  status = fnPlugin.deregisterCommand("myCommand");
  if(!status){
    status.perror("deregisterNode");
    return status;
  }
  return MS::kSuccess;
}
