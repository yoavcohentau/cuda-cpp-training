#include "circle.h"
#define _USE_MATH_DEFINES
#include <cmath>


// int Circle::counter = 0;

Circle::Circle(float x_in, float y_in, float radius_in){
    x = x_in;
    y = y_in;
    radius = radius_in;

    counter++;
}

Circle::~Circle(){
    counter--;
}

float Circle::calcArea() const{
    return M_PI * std::pow(radius, 2);
}
