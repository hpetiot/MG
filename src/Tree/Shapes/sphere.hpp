//
// Created by hugo on 9/15/22.
//

#pragma once
#include <implicits.h>

class Sphere : public AnalyticScalarField{
private:
    const float ray;
    const Vector center;
public:
    Sphere(float ray, Vector center);
    double Value(const Vector& candidate) const override;
    Vector Gradient(const Vector& point) const override;
    const Box autoBox();
};
