#pragma once
#include <iostream>

class Shape{
public:
    virtual float calcArea() const{
        throw "Not Implemented!";
    };
};
