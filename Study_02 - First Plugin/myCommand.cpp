#include "myCommand.h"

MyCommand::MyCommand(){}
MStatus MyCommand::doit(const MArgList& argList){

  MGlobal::displayInfo("Test my first Maya Plugin!");
  return MS::kSuccess;
}

void* MyCommand::creator(){
  return new MyCommand;
}
