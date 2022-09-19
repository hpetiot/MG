//
// Created by hugo on 9/15/22.
//

#include "sphere.hpp"
Sphere::Sphere(float ray, Vector center):ray(ray), center(center) {}

double Sphere::Value(const Vector &candidate) const {
    return Norm(candidate-center) - ray;
}

Vector Sphere::Gradient(const Vector &point) const {
    Vector xe (point[0] + Epsilon, point[1], point[2]);
    Vector ye (point[0], point[1] + Epsilon, point[2]);
    Vector ze (point[0], point[1], point[2] + Epsilon);

    float gx = Value(xe) - Value(point) / Epsilon;
    float gy = Value(ye) - Value(point) / Epsilon;
    float gz = Value(ze) - Value(point) / Epsilon;

    return Vector(gx, gy, gz);
}

const Box Sphere::autoBox() {
    return Box(center, ray);
}
