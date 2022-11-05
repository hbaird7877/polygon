#include "polygon.hpp"
#include <cmath>
#include <iostream>

class triangle:public polygon{
public:
    virtual double area() const{
        return ((this->side_length)*(this->side_length)*(sqrt(3)))/4.0;
    }
};

// Class factories - constructor
extern "C" polygon* create(){
    return new triangle;
}

// Class factories - destructor
extern "C" void destroy(polygon* p){
    delete p;
}