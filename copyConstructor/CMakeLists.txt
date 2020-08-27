#ctorLib is short for constructor library
add_library(ctorLib)

target_include_directories(ctorLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_subdirectory(src)

