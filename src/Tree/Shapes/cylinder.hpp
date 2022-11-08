#pragma once 

#include <Shape.hpp>

class Cylinder : public Shape{
private:
    Vector startPoint;
    Vector endPoint;
    double ray;
public:
    Cylinder(Vector startPoint, Vector endPoint, double ray):startPoint(startPoint), endPoint(endPoint), ray(ray), Shape{}{}
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};