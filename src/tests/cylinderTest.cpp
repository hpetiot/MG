//
// Created by hugo on 9/15/22.
//
#include <mathematics.h>
#include <mesh.h>
#include <cylinder.hpp>
int main(){
    Mesh cylinder;
    Cylinder C(Vector(0.), Vector(0., 0., 1.), 0.5);
    C.Polygonize(50,cylinder,  C.autoBox());
    cylinder.SaveObj("./cylinder.obj", "");
    return 0;
}
