cmake_minimum_required(VERSION 3.0)

include($ENV{DEVKIT_LOCATION}/cmake/pluginEntry.cmake)

set(PROJECT_NAME myBulgeDeformer)

set(SOURCE_FILES myPlugin.cpp src/deformer.cpp)

set(LIBRARIES OpenMaya OpenMayaAnim Foundation )

build_plugin()

# COPY .bundle to the plugins folder
add_custom_command(TARGET myBulgeDeformer
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:myBulgeDeformer> "${PROJECT_BINARY_DIR}/../../../plugins")
