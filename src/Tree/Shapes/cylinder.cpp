#include <cylinder.hpp>

Cylinder::Cylinder(float ray, Vector pointStart, Vector pointEnd):ray(ray), pointStart(pointStart), pointEnd(pointEnd) {}

double Cylinder::Value(const Vector& candidate) const {
    Vector ba = pointEnd - pointStart;
    Vector pa = candidate - pointStart;

    double baba = ba*ba;
    double paba = pa*ba;
    double x = Norm(pa * baba-ba*paba) - ray*baba;
    double y = abs(paba-baba*0.5) - baba * 0.5;
    double x2 = x*x;
    double y2 = y*y*baba;
    double d = (std::max(x, y)< 0.f)? -std::min(x2, y2):(((x>0.f)? x2:0.f) + ((y>0.f)?y2:0.0));
    int sign = d<0.f? -1:1;
    return sign*sqrt(abs(d))/baba;
}

Vector Cylinder::Gradient(const Vector &point) const {
    Vector xe (point[0] + Epsilon, point[1], point[2]);
    Vector ye (point[0], point[1] + Epsilon, point[2]);
    Vector ze (point[0], point[1], point[2] + Epsilon);

    float gx = Value(xe) - Value(point) / Epsilon;
    float gy = Value(ye) - Value(point) / Epsilon;
    float gz = Value(ze) - Value(point) / Epsilon;

    return Vector(gx, gy, gz);
}

const Box Cylinder::autoBox() const {
    return Box(Box(pointStart, ray), Box(pointEnd, ray));
}