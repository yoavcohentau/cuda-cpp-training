#include "rectangle.h"


Rectangle::Rectangle(float l, float h){
    length = l;
    height = h;

    counter++;
}

Rectangle::~Rectangle(){
    counter--;
}

float Rectangle::calcArea() const{
    return length * height;
}