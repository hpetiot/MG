#include <union.hpp>

int Union::getWeight(){
    int sonTotalWeight = 0;
    for(auto& son : sons){
        if(son->getType() == type){
            sonTotalWeight+=son->getWeight();
        }
    }
    return sonTotalWeight +1;
}

double Union::Value(const Vector& candidate) const{
    double minVal = INFINITY;
    for (auto& son : sons){
        double val = son->Value(candidate);
        minVal = std::min(minVal, val);
    }
    return minVal;
}

Box Union::autoBox() const {
    Box containerBox = sons.at(0)->autoBox();
    for(auto it = sons.cbegin()++; it != sons.cend(); it++){
        containerBox = Box(containerBox, (*it)->autoBox());
    }
    return containerBox;
}

bool Union::addSon(Node* son){
    sons.emplace_back(son);
    return true;
}