#ifndef DEFORMER_H
#define DEFORMER_H

#include <maya/MPxDeformerNode.h>
#include <maya/MFnNumericAttribute.h>
#include <maya/MFnTypedAttribute.h>
#include <maya/MFnMesh.h>
#include <maya/MItGeometry.h>
#include <maya/MPointArray.h>

class myBlendDeformer : public MPxDeformerNode{
public:
    static MTypeId id;
    static MObject mBlendMesh;
    static MObject mBlendWeight;

    myBlendDeformer();
    virtual ~myBlendDeformer();

    static void* creator();
    static MStatus initialize();

    virtual MStatus deform(MDataBlock& data,
                           MItGeometry& itGeo,
                           const MMatrix& localToWorldMatrix,
                           unsigned int geomIndex);

};
#endif
