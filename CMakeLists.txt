option(BUILD_ILMBASE_SUBPROJECT "Build targets from subproject IlmBase" OFF)
option(BUILD_OPENEXR_SUBPROJECT "Build targets from subproject OpenEXR" OFF)

if(BUILD_ILMBASE_SUBPROJECT)
    add_subdirectory(IlmBase)
endif()

if(BUILD_OPENEXR_SUBPROJECT)
    add_subdirectory(OpenEXR)
endif()
