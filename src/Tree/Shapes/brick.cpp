#include <brick.hpp>

double Brick::Value(const Vector& candidate) const{
    Vector q = Abs(candidate) - (threeSize/2);
    return std::min(std::max(q[0], std::max(q[1], q[2])), 0.) + Norm(std::max(q, Vector(0)));
}

Box Brick::autoBox() const{
    return Box(Vector(0.), Norm(threeSize)/2);
}