#include <intersection.hpp>
#include <translation.hpp>
#include <sphere.hpp>
#include <cylinder.hpp>
#include <union.hpp>
int main(void){
    Mesh interMesh;
    Node* c = new Cylinder(Vector(0.25), Vector(0.25, 0.25, 2.), 1.);
    Node* s1 = new Sphere(1.);
    Node* s2 = new Sphere(1.);
    Node* trans = new Translation(Vector(0.5));
    trans->addSon(s2);
    Node* inter = new Intersection();
    inter->addSon(s1);
    inter->addSon(trans);
    inter->addSon(c);
    inter->Polygonize(50, interMesh, inter->autoBox());
    interMesh.SaveObj("intersection.obj", "");
    return 0;
}