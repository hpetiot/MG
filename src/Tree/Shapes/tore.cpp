#include <tore.hpp>

Tore::Tore(Vector center, float diskRadius, float tubeRadius):center(center), diskRadius(diskRadius), tubeRadius(tubeRadius){}

double Tore::Value(const Vector& candidate) const {
    Vector q = Vector(Norm(Vector(candidate[0], candidate[2], 0.f)) - diskRadius, candidate[1], 0.f);
    return Norm(q) - tubeRadius;
}

Vector Tore::Gradient(const Vector& point) const {
    Vector xe (point[0] + Epsilon, point[1], point[2]);
    Vector ye (point[0], point[1] + Epsilon, point[2]);
    Vector ze (point[0], point[1], point[2] + Epsilon);

    float gx = Value(xe) - Value(point) / Epsilon;
    float gy = Value(ye) - Value(point) / Epsilon;
    float gz = Value(ze) - Value(point) / Epsilon;

    return Vector(gx, gy, gz);
}

const Box Tore::autoBox(){
    return Box(center, diskRadius+tubeRadius);
}