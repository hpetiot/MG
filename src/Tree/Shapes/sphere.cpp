#include <sphere.hpp>

double Sphere::Value(const Vector& candidate) const{
    return Norm(candidate) - ray;
}

Box Sphere::autoBox() const {
    return Box{ray};
}