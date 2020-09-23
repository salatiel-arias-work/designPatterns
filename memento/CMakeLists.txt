#adds library target named "memento Lib"
add_library(mementoLib STATIC	src/car.cpp
				src/memento.cpp
				src/careTaker.cpp)

#adds path to header files
target_include_directories(mementoLib PUBLIC inc)

#creates an executable target called "mementoMain"
add_executable(mementoMain src/main.cpp)

#links mementoMain executable against mementoLib library
target_link_libraries(mementoMain mementoLib)


