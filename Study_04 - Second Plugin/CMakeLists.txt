cmake_minimum_required(VERSION 3.0)

include($ENV{DEVKIT_LOCATION}/cmake/pluginEntry.cmake)

set(PROJECT_NAME gaussianPlugin)

set(SOURCE_FILES myPlugin.cpp src/gaussian.cpp)

set(LIBRARIES OpenMaya OpenMayaRender OpenMayaUI Foundation)

build_plugin()

# COPY .bundle to the plugins folder
add_custom_command(TARGET gaussianPlugin
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:gaussianPlugin> "${PROJECT_BINARY_DIR}/../../../plugins")
