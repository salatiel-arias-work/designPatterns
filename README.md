# Design Patterns Project

This project is intended to be used as a reference for design pattern implementations in C++.
One of the main goals of this project is to offer examples, of simple implementations 
of some of the 21 design patterns introduced by the GoF (Gang of Four).
Other C++ programming concepts are offered as well, as a complementary part of the project.

## Requirements

Minimum requirements to install this project are: 

CMake 3.18.0

Visual Studio Community (see CMake generators list for minimum required version)


## Installation

To install this project create a new folder named "build" in the top level directory.

Example: %USERPROFILE%\DesignPatternsProject\\build

(note: you can use another name for this directory, but .gitignore file should be modified accordingly)

Then open the Command Promt from within the newly created folder and run the following command:

```bash
cmake ..
```

## Usage

Once CMake is done creating the build system, a Visual Studio solution can be found at:
 
%USERPROFILE%\DesignPatternsProject\\build\\DesignPatternsProject.sln 

There is a Visual Studio Project for each Design Pattern and C++ concept

## License
[MIT](https://choosealicense.com/licenses/mit/)
