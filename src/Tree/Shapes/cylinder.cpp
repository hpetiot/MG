#include <cylinder.hpp>

Cylinder::Cylinder(float ray, Vector pointStart, Vector pointEnd):ray(ray), pointStart(pointStart), pointEnd(pointEnd) {
    Vector tmp = pointStart - pointEnd;

}

double Cylinder::Value(const Vector& candidate) const {
    std::cout << "candidate = ("<< candidate[0] <<", " << candidate[1] << ", " << candidate[2]<<")"<<std::endl;
    Vector ba = pointEnd - pointStart;
    std::cout << "ba = ("<< ba[0] <<", " << ba[1] << ", " << ba[2]<<")"<<std::endl;
    Vector pa = candidate - pointStart;
    std::cout << "pa = ("<< pa[0] <<", " << pa[1] << ", " << pa[2]<<")"<<std::endl;
    float baba = ba * ba;
    std::cout << "baba = " << baba << std::endl;
    float paba = pa * ba;
    std::cout << "paba = " << paba << std::endl;
    float x = Norm(pa*baba - ba*paba) - ray*baba;
    std::cout << "x = " << x << std::endl; 
    float y = abs(paba-baba*0.5)-baba*0.5;
    std::cout << "y = " << y << std::endl;
    float x2 = x*x;
    std::cout << "x2 = " << x2 << std::endl;
    float y2 = y*y*baba;
    std::cout << "y2 = " << y2 << std::endl;
    float d = (std::max(x, y)<0.0)?-std::min(x2, y2):(((x > 0.0)?x2:0.0)+((y>0.0)?y2:0.0));
    std::cout << "d = " << d << std::endl;
    std::cout << "sqrt(d)/baba = " <<  sqrt(d)/baba << std::endl;
    return sqrt(d)/baba;
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

const Box Cylinder::autoBox() {
    return Box(Box(pointStart, ray), Box(pointEnd, ray));
}