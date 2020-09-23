cmake_minimum_required(VERSION 3.0)

include($ENV{DEVKIT_LOCATION}/cmake/pluginEntry.cmake)

set(PROJECT_NAME myPluginCMake)

set(SOURCE_FILES myCommand.cpp pluginMaya.cpp)

set(LIBRARIES OpenMaya OpenMayaRender OpenMayaUI Foundation)

find_opengl()

build_plugin()

# COPY .bundle to the plugins folder
add_custom_command(TARGET myPluginCMake
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:myPluginCMake> "${PROJECT_BINARY_DIR}/../../../plugins")


                   
