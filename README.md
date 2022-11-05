# Introduction

This is an example library that will be used to create triangle.so library file. The goal was to create a polygon interface (base class) which gets inheritted by subclass - (Triangle). The goal was to calculate the area of different polygons.
After creating the triangle.so file, it will be used in conjunction with the actual repo. that would use the library file using dlopen API

## Components

### Interface

Interface details are described within polygon.hpp file. We have declared the base class
implementation of Polygon class. We have also declared class factory functions to generate objects. This will used by calling 
programs later.

### Implementation

The implementation details for the subclass (Triangle) is provided with triangle.cpp file. Note, the area method was declared
virtual in the abstract polygon class and is implemented here. We have also declared class factory functions to generate objects. 
This will used by calling programs later.

### Building

Creating the object file (triangle.o) against the implementation file

    g++ -std=c++17 -c -o triangle.o triangle.cpp -fPIC


Creating the shared library (triangle.so)

    gcc -shared -o triangle.so triangle.o


## Next steps

Copy the interface file (polygon.hpp) and library file (triangle.so) for downstream use. We need to use dlopen API to be 
able to use the library.