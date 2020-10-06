#ifndef DEFORMER_H
#define DEFORMER_H

#include <maya/MItGeometry.h>
#include <maya/MFnNumericAttribute.h>
#include <maya/MPxDeformerNode.h>
#include <maya/MFnMesh.h>
#include <maya/MFloatVectorArray.h>
#include <maya/MVectorArray.h>
#include <maya/MGlobal.h>



class myBulgeDeformer : public MPxDeformerNode {
public:
    static MTypeId id;
    static MObject mAmount;

    myBulgeDeformer();
    virtual ~myBulgeDeformer();

    static void* creator();

    static MStatus initialize();

    virtual MStatus     deform( MDataBlock& data,
                                MItGeometry& itGeo,
                                const MMatrix& localToWorldMatrix,
                                unsigned int geomIndex );


};
#endif
