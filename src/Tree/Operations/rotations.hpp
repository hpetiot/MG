#pragma once

#include <UnOp.hpp>

class Rotations : public UnOp{
private:
    std::array<std::array<double, 3>, 3> m{};
public:
    Rotations(const Vector& rotVectorDegs);
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};