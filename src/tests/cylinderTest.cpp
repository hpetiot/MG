//
// Created by hugo on 9/15/22.
//
#include <mathematics.h>
#include <mesh.h>
#include <cylinder.hpp>
int main(){
    Mesh cylinder;
    Cylinder C(0.5, Vector(1.f, 1.f, 1.f), Vector(0.f, 0.f, 0.f));
    C.Polygonize(50,cylinder,  C.autoBox());
    cylinder.SaveObj("./cylinder.obj", "");
    return 1;
}
