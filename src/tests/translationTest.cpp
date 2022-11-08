#include <translation.hpp>
#include <sphere.hpp>
int main(void){
    Mesh treeMesh;
    Sphere* shpere = new Sphere(0.5f);
    Node* trans = new Translation(Vector(1.0f, 1.0f, 1.0f));
    trans->addSon(shpere);
    trans->Polygonize(10, treeMesh, trans->autoBox());
    treeMesh.SaveObj("./translatedSphere.obj", "");
    return 0;
}