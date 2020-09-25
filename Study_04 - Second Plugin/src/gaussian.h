#ifndef GAUSSIAN_H
#define GAUSSIAN_H

#include <maya/MPxNode.h>
#include <maya/MFnNumericAttribute.h>
#include <maya/MObject.h>

#include <iostream>
#include <math.h>

class Gaussian : public MPxNode{
public:
    static MTypeId id;
    static MObject gVariance;
    static MObject gHeight;
    static MObject gCenter;
    static MObject gInValue;
    static MObject gOutValue;

    Gaussian();
    virtual ~Gaussian();

    static void *creator();

    virtual MStatus compute(const MPlug& plug, MDataBlock& data);

    static MStatus initialize();

};

#endif
