#pragma once

#include <Shape.hpp>

class Brick : public Shape{
private:
    Vector threeSize;
public:
    Brick(Vector sizes):threeSize(sizes){}
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};