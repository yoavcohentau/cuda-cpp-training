#pragma once
#include "shape.h"

class Circle : public Shape{
private:
    float x, y, radius;
public:
    inline static int counter = 0;

    Circle(float x, float y, float radius);
    ~Circle();

    virtual float calcArea() const override;
};
