#pragma once
#include "shape.h"

class Rectangle : public Shape
{
private:
    float length, height;

public:
    inline static int counter = 0;

    Rectangle(float l, float h);
    ~Rectangle();

    virtual float calcArea() const override;
};
