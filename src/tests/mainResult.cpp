#include <rotations.hpp>
#include <translation.hpp>
#include <union.hpp>
#include <intersection.hpp>
#include <smoothUnion.hpp>
#include <difference.hpp>
#include <cylinder.hpp>
#include <tore.hpp>
#include <sphere.hpp>
#include <brick.hpp>
Node* create_spinBall(Node* shape, int step){
   std::vector<Node*> rotations;
    for(int i = 0; i < step; i++){
        for(int j = 0; j < step; j++){
            for(int k=0; k < step; k++){
                Node* rot = new Rotations(Vector(360.*i/step, 360.*j/step, 360.*k/step));
                rot->addSon(shape);
                rotations.emplace_back(rot);
            }
        }
    }
    return new Union(rotations); 
}

Node* createRepeat(Vector direction, Node* element, int step){
    Vector tmp = direction;
    Node* result = new Union();
    for (int i = 0; i < step; tmp += direction, i++){
        Node* subElement = new Translation(tmp);
        subElement->addSon(element);
        result->addSon(subElement);
    }
    return result;
}

int main(void){
    Mesh katana;
    double guardInnerRay = 0.15;
    Node* spinCyl = new Cylinder(Vector(0.), Vector(0., 0., guardInnerRay), guardInnerRay);
    Node* spinnBall = create_spinBall(spinCyl, 6);
    Node* jewel = new Rotations(Vector(0., 0., 90));
    jewel->addSon(spinnBall);
    Node* guardRing = new Tore(guardInnerRay+0.070, 0.075);
    Node* guard = new SmoothUnion(0.02);
    guard->addSon(jewel);
    guard->addSon(guardRing);

    Node* handleCylinder = new Cylinder(Vector(0.), Vector(0., 0., 0.15), 0.075);
    double halfAngle = 30.;
    Node* rotaionHandlLeft = new Rotations(Vector(0., halfAngle, 0.));
    Node* rotaionHandlRight = new Rotations(Vector(0., -halfAngle, 0.));

    rotaionHandlLeft->addSon(handleCylinder);
    rotaionHandlRight->addSon(handleCylinder);
    Node* handleElement = new SmoothUnion(0.05, true);
    handleElement->addSon(rotaionHandlLeft);
    handleElement->addSon(rotaionHandlRight);
    Node* handle = createRepeat(Vector(0., 0., 0.05), handleElement, 20);

    Node* guardPosition = new Translation(Vector(0., 0., -0.14));
    guardPosition->addSon(guard);

    Node* handleGuard = new SmoothUnion(0.1);
    handleGuard->addSon(guardPosition);
    handleGuard->addSon(handle);
    double sizeSphere = 0.3;
    double y = 4./5. * sizeSphere;
    double z = 6./5. * sizeSphere;
    Node* bladeGuardBase = new Sphere(sizeSphere);
    Node* bgcut = new Brick(Vector(2*sizeSphere, y, z));
    Node* bdcutOffset = new Translation(Vector(0., 0., -0.25));
    bdcutOffset->addSon(bgcut);
    Node* bladeGuard = new Intersection();
    bladeGuard->addSon(bladeGuardBase);
    bladeGuard->addSon(bdcutOffset);
    Node* transBG = new Translation(Vector(0., 0., 1.5));
    transBG->addSon(bladeGuard);

    Node* fullHandle = new SmoothUnion(0.25);
    fullHandle->addSon(transBG);
    fullHandle->addSon(handleGuard);

    Node* transJewel = new Translation(Vector(0., 0., 1.23));
    transJewel->addSon(jewel);
    
    Node* bladeBase = new Brick(Vector(0.3, y-0.05, 4.75));
    Node* suppTopRight = new Translation(Vector(0.19, 0.1, 0.));
    Node* suppBotRight = new Translation(Vector(0.19, -0.1, 0.));

    Node* suppTopLeft = new Translation(Vector(-0.19, 0.1, 0.));
    Node* suppBotLeft = new Translation(Vector(-0.19, -0.1, 0.));

    Node* edgeSuppRot = new Rotations(Vector(0., 0., 45));
    Node* edgeSuppRot2 = new Rotations(Vector(0., 0., -45));
    edgeSuppRot->addSon(bladeBase);
    edgeSuppRot2->addSon(bladeBase);
    suppBotRight->addSon(edgeSuppRot);
    suppTopRight->addSon(edgeSuppRot2);
    suppBotLeft->addSon(edgeSuppRot2);
    suppTopLeft->addSon(edgeSuppRot);

    Node* edgeTipCutter = new Brick(Vector(1.));
    Node* cutY = new Rotations(Vector(45., 0., 0.));
    cutY->addSon(edgeTipCutter);
    Node* cutYMin = new Rotations(Vector(-45., 0., 0.));
    cutYMin->addSon(edgeTipCutter);

    Node* transY = new Translation(Vector(0., 0.5, 2.2));
    transY->addSon(cutY);
    Node* transYmin = new Translation(Vector(0., -0.5, 2.2));
    transYmin->addSon(cutYMin);

    Node* tipCutter = new Union();
    tipCutter->addSon(transY);
    tipCutter->addSon(transYmin);

    Node* supp = new Union();
    supp->addSon(suppBotRight);
    supp->addSon(suppTopRight);
    supp->addSon(suppBotLeft);
    supp->addSon(suppTopLeft);
    
    Node* resBlade = new Difference();
    resBlade->addSon(bladeBase);
    resBlade->addSon(supp);
    Node* resBladeTip = new Difference();
    resBladeTip->addSon(resBlade);
    resBladeTip->addSon(tipCutter);

    Node* shiftedResBlade = new Translation(Vector(0., 0., 3.5));
    shiftedResBlade->addSon(resBladeTip);

    Node* fullSword = new Union();
    fullSword->addSon(fullHandle);
    fullSword->addSon(transJewel);
    fullSword->addSon(shiftedResBlade);

    Node * root = handleElement;
    std::cout<< "done building item" << std::endl;
    root->Polygonize(50, katana, root->autoBox());
    std::cout << "done poly" << std::endl;
    katana.SaveObj("Katana.obj", "");
    return 0;
}