#pragma once

#include <Shape.hpp>

class Tore : public Shape{
private:
    const Vector center;
    const float diskRadius;
    const float tubeRadius;
public:
    Tore(Vector center, float diskRadius, float tubeRadius);
    double Value(const Vector& candidate) const override;
    Vector Gradient(const Vector& point) const override;
    const Box autoBox() const override;
};