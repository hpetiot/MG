#pragma once

#include <Shape.hpp>

class Cylinder : public Shape{
private:
    const Vector pointStart;
    const Vector pointEnd;
    const float ray;
public:
    Cylinder(float ray, Vector pointStart, Vector pointEnd);
    double Value(const Vector& candidate) const override;
    Vector Gradient(const Vector& candidate) const override;
    const Box autoBox() const override;
};