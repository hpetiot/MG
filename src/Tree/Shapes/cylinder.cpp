#include <cylinder.hpp>

double Cylinder::Value(const Vector& candidate) const{
    Vector ba = endPoint - startPoint;
    Vector pa = candidate - startPoint;

    double baba = ba*ba;
    double paba = pa*ba;
    double x = Norm(pa * baba-ba*paba) - ray*baba;
    double y = abs(paba-baba*0.5) - baba * 0.5;
    double x2 = x*x;
    double y2 = y*y*baba;
    double d = (std::max(x, y)< 0.f)? -std::min(x2, y2):(((x>0.)? x2:0.) + ((y>0.)?y2:0.0));
    int sign = d<0.? -1:1;
    return sign*sqrt(abs(d))/baba;
}

Box Cylinder::autoBox() const {
    return Box(Box(startPoint, ray), Box(endPoint, ray));
}