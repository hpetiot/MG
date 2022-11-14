#include <smoothInter.hpp>
#include <translation.hpp>
#include <sphere.hpp>

int main(void){
    Mesh smoothInterMesh;
    Node* s1 = new Sphere(1.);
    Node* s2 = new Sphere(1.);
    Node* trans = new Translation(Vector(0.5), s2);
    Node* inter = new SmoothInter(0.3, s1, trans);

    inter->Polygonize(50, smoothInterMesh, inter->autoBox());
    smoothInterMesh.SaveObj("./smoothInter.obj", "");
}