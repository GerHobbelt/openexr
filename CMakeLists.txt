cmake_minimum_required(VERSION 3.6)


include("cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.15.33.tar.gz"
    SHA1 "7849ccc2607964afd5fc8b48130473a133665670"
)

project(KeepingHunterHappyRequiresAProjectDefinitionInThisFile)

add_subdirectory(IlmBase)
add_subdirectory(OpenEXR)
