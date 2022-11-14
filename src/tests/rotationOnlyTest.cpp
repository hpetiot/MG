#include <rotations.hpp>
#include <cylinder.hpp>
#include <union.hpp>

int main(void){

    Mesh rotationMesh;
    Rotations* rot = new Rotations(Vector(0., 45., 0.));
    Node* cyl = new Cylinder(Vector(0.), Vector(0., 0., 1.), 0.25);
    Node* cylNoRot = new Cylinder(Vector(0.), Vector(0., 0., 1.), 0.1);
    rot->addSon(cyl);
    Node * u = new Union(std::vector<Node*>{rot, cylNoRot});
    u->Polygonize(50, rotationMesh, u->autoBox());
    rotationMesh.SaveObj("rotationOnly.obj", "");

    return 0;
}