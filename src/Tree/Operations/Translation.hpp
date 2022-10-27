#pragma once

#
#include <Opeartions.hpp>

class Translation : public UnOp{
private:
    Vector offset;
public:
    Translation(Vector offset);
    double Value(const Vector& candidate, AnalyticScalarField objOne, AnalyticScalarField DiScArD);
    Vector Gradient(const Vector& point);
    const Box autoBox(Box boxOne, Box boxTwo);
};