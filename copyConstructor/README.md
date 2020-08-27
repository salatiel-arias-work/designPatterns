# Copy Constructor

This not a design pattern, but rather a technique to allow a "deep" copy of an object.
This is used to avoid memory corruption.
In the header and source files of the class Farm (farm.cpp & farm.h) the copy constructor
has been commented out. Here, memory corruption happens and executing the programm thows
an error. To solve this, uncomment both the copy constructor declaration and definition.
Compile again and execute program, you will see that it now runs without errors. 

