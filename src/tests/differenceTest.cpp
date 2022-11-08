#include<difference.hpp>
#include<translation.hpp>
#include<sphere.hpp>

int main(void){
    Mesh treeMesh;

    Sphere* shpereOriginal = new Sphere(2.f);
    Sphere* shpereRemoved = new Sphere(0.5f);
    Translation* transForRemoved = new Translation(Vector(0.f, 1.75f, 0.f));
    transForRemoved->addSon(shpereRemoved);
    Node* diff = new Difference(shpereOriginal, transForRemoved);
    diff->Polygonize(100, treeMesh, diff->autoBox());
    treeMesh.SaveObj("diffOf2Spheres.obj", "");
    return 0;
}