#include <cylinder.hpp>
#include <sphere.hpp>
#include <translation.hpp>
#include <mesh.h>
#include <smoothUnion.hpp>
#include <union.hpp>
int main(){
    Mesh SUMesh;

    Node* C = new Cylinder(Vector(1.), Vector(0.), 1.);
    Node* S = new Cylinder(Vector(0., 1., 0.), Vector(0.), 1.);
    Node*SU2 = new SmoothUnion(0.5, true);
    SU2->addSon(C);
    SU2->addSon(S);
    SU2->Polygonize(50, SUMesh, SU2->autoBox());
    SUMesh.SaveObj("./smoothUnion.obj", "");
    return 0;
};
