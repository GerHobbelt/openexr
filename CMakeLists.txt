CMAKE_MINIMUM_REQUIRED(VERSION 2.8)


include("cmake/HunterGate.cmake")

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.94.tar.gz"
    SHA1 "3f4c104df81f1c4a627f4b0ea9f3306de1b0b54b"
)

project(KeepingHunterHappyRequiresAProjectDefinitionInThisFile)

add_subdirectory(IlmBase)
add_subdirectory(OpenEXR)
