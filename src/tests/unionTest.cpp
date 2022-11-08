#include <union.hpp>
#include <translation.hpp>
#include <sphere.hpp>

int main(void){
    Mesh treeMesh;
    Sphere* sphereOne = new Sphere(1.);
    Sphere* sphereTwo = new Sphere(1.);
    Translation* trans = new Translation(Vector(0.75));
    trans->addSon(sphereTwo);
    Union* unionOne = new Union(std::vector<Node*>{trans, sphereOne});
    unionOne->Polygonize(50, treeMesh, unionOne->autoBox());
    treeMesh.SaveObj("union.obj", "");
}