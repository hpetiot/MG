#include<rotations.hpp>
#include <cylinder.hpp>
#include <union.hpp>

int main(void){
    Mesh starMesh;
    Node* cyl = new Cylinder(Vector(0.), Vector(0., 0., 1.), 1.);
    std::vector<Node*> rotations;
    int step = 6;
    for(int i = 0; i < step; i++){
        for(int j = 0; j < step; j++){
            for(int k=0; k < step; k++){
                Node* rot = new Rotations(Vector(360.*i/step, 360.*j/step, 360.*k/step));
                rot->addSon(cyl);
                rotations.emplace_back(rot);
            }
        }
    }
    Node* root = new Union(rotations);
    root->Polygonize(200, starMesh, root->autoBox());
    starMesh.SaveObj("rotMultiTest.obj", "");
    return 0;
}