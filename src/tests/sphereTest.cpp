//
// Created by hugo on 9/15/22.
//
#include <mathematics.h>
#include <mesh.h>
#include <sphere.hpp>
int main(){
    Mesh sphere;
    Sphere S(1.f);
    S.Polygonize(10,sphere,  S.autoBox());
    sphere.SaveObj("./sphere.obj", "");
    return 1;
}
