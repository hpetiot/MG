#include <smoothUnion.hpp>
#include <mathematics.h>
#include <iostream>

double SmoothUnion::getSmoothSize(){
    return smoothSize;
}

int SmoothUnion::getWeight(){
    int sonTotalWeight = 0;
    for(auto& son : sons){
        if(son->getType() == type){
            SmoothUnion* suSon = (SmoothUnion*)son;
            double sonSmooth = suSon->getSmoothSize();
            if(sonSmooth <= smoothSize + Epsilon && sonSmooth >= smoothSize - Epsilon){
                sonTotalWeight+=son->getWeight();
            }
        }
    }
    return sonTotalWeight +1;
}

double SmoothUnion::Value(const Vector& candidate) const {
    double leftVal= sons[0]->Value(candidate);
    double rightVal= sons[1]->Value(candidate);
    double baseHeight = std::max(smoothSize-abs(leftVal - rightVal), 0.)/smoothSize;
    double offset = ((smoothSize)/6.) *  baseHeight * baseHeight * baseHeight;
    return std::min(leftVal, rightVal) - (reverse * offset);
}

Box SmoothUnion::autoBox() const{
    return Box(sons[0]->autoBox(), sons[1]->autoBox());
}