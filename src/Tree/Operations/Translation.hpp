#pragma once

#include <implicits.h>

class Translation : public AnalyticScalarField {
private:
    Vector translation;
public:
    double Value(Vector candidate);
    Vector Gradient(Vector point);
    Box autoBox();
}