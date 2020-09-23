#include <maya/MPxCommand.h>
#include <maya/MGlobal.h>

class MyCommand : public MPxCommand{

public:
  MyCommand();
  virtual MStatus doit(const MArgList& argList);
  static void* creator();
};
