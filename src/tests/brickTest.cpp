#include <brick.hpp>

int main(void){
    Mesh brickMesh;
    Node* b = new Brick{Vector(1., 2., 3.)};
    b->Polygonize(50, brickMesh, b->autoBox());
    brickMesh.SaveObj("brickTest.obj", "");
    return 0;
}