#include <sphere.hpp>
#include <cylinder.hpp>
#include <smoothDiff.hpp>
#include <mesh.h>

int main(void){
    Mesh diffMesh;

    Node* C = new Cylinder(Vector(0.), Vector(4.), 1.);
    Node* S = new Sphere(3.);

    Node* SD = new SmoothDiff(-0.75, S, C);
    SD->Polygonize(50, diffMesh, SD->autoBox());
    diffMesh.SaveObj("./smoothDiff.obj", "");
}