#pragma once

#include <implicits.h>

class Tore : public AnalyticScalarField{
private:
    const Vector center;
    const float diskRadius;
    const float tubeRadius;
public:
    Tore(Vector center, float diskRadius, float tubeRadius);
    double Value(const Vector& candidate) const override;
    Vector Gradient(const Vector& point) const override;
    const Box autoBox();
};