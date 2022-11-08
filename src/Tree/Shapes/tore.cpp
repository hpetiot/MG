#include <tore.hpp>

double Tore::Value(const Vector& candidate) const {
    Vector q = Vector(Norm(Vector(candidate[0], candidate[2], 0.f)) - diskRay, candidate[1], 0.f);
    return Norm(q) - tubeRay; 
}

Box Tore::autoBox()const{
    return Box(diskRay + tubeRay);
}