#ctorLib is short for constructor library
add_library(ctorLib	src/cow.cpp
			src/farm.cpp)

target_include_directories(ctorLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_executable(cpyCtorMain src/main.cpp)

target_link_libraries(cpyCtorMain ctorLib)
