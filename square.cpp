#include "polygon.hpp"
#include <cmath>
#include <iostream>

class square:public polygon{
public:
    virtual double area() const{
        int sideOne = this->side_length;
        int sideTwo = this->side_length;
        return sideOne * sideTwo;
    }
};

// Class factories - constructor
extern "C" polygon* create(){
    return new square;
}

// Class factories - destructor
extern "C" void destroy(polygon* p){
    delete p;
}