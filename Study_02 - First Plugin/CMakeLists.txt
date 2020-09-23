cmake_minimum_required(VERSION 3.17)
project(cgcircuitproject)

set(MAYA_VERSION 2019 CACHE STRING "Maya Version Number")
set(SOURCE_FILES "pluginMaya.cpp" "myCommand.cpp")

find_package(OpenGL REQUIRED)

set(CUSTOM_DEFINITIONS "REQUIRE_IOSTREAM;_BOOL")
set(MAYA_INSTALL_BASE_SUFFIX "")
set(MAYA_INC_SUFFIX "include")
set(MAYA_LIB_SUFFIX "lib")


# IF APPLE
set(MAYA_INSTALL_BASE_DEFAULT "/Applications/Autodesk")
set(MAYA_LIB_SUFFIX "Maya.app/Contents/MacOS")
set(CUSTOM_DEFINITIONS "${CUSTOM_DEFINITIONS};OSMac_")


set(MAYA_INSTALL_BASE_PATH ${MAYA_INSTALL_BASE_DEFAULT} CACHE STRING "Path containing all your maya installaions, like /usr/autodesk or /Applications/Autodesk")

set(LIBRARIES ${LIBRARIES} "Foundation" "OpenMaya" "OpenMayaAnim" "OpenMayaUI" "OpenMayaRender" ${OPENGL_LIBRARIES})

set(_MAYA_LOCATION ${MAYA_INSTALL_BASE_PATH}/maya${MAYA_VERSION}${MAYA_INSTALL_BASE_SUFFIX})

set(_PROJECT ${PROJECT_NAME})

include_directories(${_MAYA_LOCATION}/${MAYA_INC_SUFFIX} ${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})

link_directories(${_MAYA_LOCATION}/${MAYA_LIB_SUFFIX})

add_library(${_PROJECT} SHARED ${SOURCE_FILES})
target_link_libraries(${_PROJECT} ${LIBRARIES})

set_target_properties(${_PROJECT} PROPERTIES COMPILE_DEFINITIONS "${CUSTOM_DEFINITIONS}")
set_target_properties(${_PROJECT} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
set_target_properties(${_PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

set_target_properties(${_PROJECT} PROPERTIES PREFIX "")
set_target_properties(${_PROJECT} PROPERTIES SUFFIX ".bundle")
