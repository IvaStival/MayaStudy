#include <maya/MFnPlugin.h>
#include "src/deformer.h"

MStatus initiliazePlugin(MObject obj){
    MStatus status;

    MFnPlugin mPlugin;

    status = mPlugin.registerNode("blendDeformer", myBlendDeformer::id, myBlendDeformer::creator, myBlendDeformer::initialize, MPxNode::kDeformerNode);

    if(!status){
      status.perror("Register Node.");

      return status;
    }

    return status;
}


MStatus uninitializePlugin(MObject obj){
    MStatus status;

    MFnPlugin mPlugin;

    status = mPlugin.deregisterNode(myBlendDeformer::id);

    if(!status){
      status.perror("Deregister Node.");

      return status;
    }
    return status;
}
