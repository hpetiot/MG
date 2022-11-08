#include <intersection.hpp>

bool Intersection::addSon(Node* son){
    sons.emplace_back(son);
    return true;
}

int Intersection::getWeight(){
    int sonTotalWeight = 0;
    for(auto& son : sons){
        if(son->getType() == type){
            sonTotalWeight+=son->getWeight();
        }
    }
    return sonTotalWeight +1;
}

double Intersection::Value(const Vector& candidate) const{
    double maxVal = -INFINITY;
    for (auto& son : sons){
        double val = son->Value(candidate);
        maxVal = std::max(maxVal, val);
    }
    return maxVal;
}

Box Intersection::autoBox() const{
    Box containerBox = sons.at(0)->autoBox();
    Vector a = containerBox[0];
    Vector b = containerBox[1];
    Vector epsiVect = Vector(Epsilon);
    for(auto it = sons.cbegin()++; it != sons.cend(); it++){
        Box sonBox = (*it)->autoBox();
        if(a < sonBox[0]){
            a =(sonBox[0])-epsiVect;
        }
        if(b > sonBox[1]){
            b = (sonBox[1])+epsiVect;
        }
    }
    return Box(a, b);
}