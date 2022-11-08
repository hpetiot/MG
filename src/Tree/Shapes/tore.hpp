#pragma once

#include <Shape.hpp>

class Tore : public Shape{
private:
    double diskRay;
    double tubeRay;
public:
    Tore(double monoRay):diskRay(monoRay), tubeRay(monoRay), Shape{}{}
    Tore(double diskRay, double tubeRay):diskRay(diskRay), tubeRay(tubeRay), Shape{}{}

    double Value(const Vector& candidate) const;
    Box autoBox() const;
};