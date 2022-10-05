//
// Created by hugo on 9/15/22.
//
#include <mathematics.h>
#include <sphere.hpp>
#include <mesh.h>
int main(){
    Mesh sphere;
    Sphere S(1.f, Vector(0.f, 0.f, 0.f));
    S.Polygonize(50,sphere,  S.autoBox());
    sphere.SaveObj("./sphere.obj", "basic sphere");
    return 1;
}
