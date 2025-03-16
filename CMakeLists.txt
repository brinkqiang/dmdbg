cmake_minimum_required(VERSION 3.8)

PROJECT(dmdbg)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

ModuleImportAll("thirdparty")

InterfaceImport("dmdbg" "include" "")

if (PROJECT_IS_TOP_LEVEL)

    ADD_EXECUTABLE(demo 
    tests/demo/demo.cpp)
    TARGET_LINK_LIBRARIES(demo dmdbg)
    ADD_EXECUTABLE(example 
    tests/example/example.cpp)
    TARGET_LINK_LIBRARIES(example dmdbg)
endif(PROJECT_IS_TOP_LEVEL)

