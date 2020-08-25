#adds library target named "memento Lib" the source files that compose this 
#library are given in "src"
add_library(mementoLib)

#relates the mementoLib library to the directory where header files are located
target_include_directories(mementoLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_subdirectory(src)

