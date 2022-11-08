#pragma once

#include <Shape.hpp>

class Sphere : public Shape{
private:
    double ray;
public:
    Sphere(double ray):Shape{}, ray(ray){}
    double Value(const Vector&) const;
    Box autoBox() const;
};