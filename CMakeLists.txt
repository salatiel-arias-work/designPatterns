#required for every CMake project, used version number of your CMake installation
cmake_minimum_required(VERSION 3.18.0)

#Name of the project to be created, upon project creation
#the absolute path of the project is assigned to CMAKE_SOURCE_DIR
project(DesignPatternsProject)

#branches the program flow to the indicated folder
#here the folder name is "memento", relevant comments follow in this folder
add_subdirectory(memento)

add_subdirectory(singleton)

add_subdirectory(proxy)

add_subdirectory(copyConstructor)