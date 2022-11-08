#include <smoothDiff.hpp>

int SmoothDiff::getWeight(){
        if(sons.at(0)->getType() == type){
        return sons.at(0)->getWeight() + 1;
    }
    return sons.at(0)->getWeight();
}

int SmoothDiff::getSmoothSize(){
    return smoothSize;
}

Node* SmoothDiff::getOriginal(){
    return sons[0];
}

Node* SmoothDiff::getRemoved(){
    return sons[1];
}

double SmoothDiff::Value(const Vector& candidate) const {
    double leftVal= sons[0]->Value(candidate);
    double rightVal= sons[1]->Value(candidate);
    double normalVal = std::max(-sons[1]->Value(candidate), sons[0]->Value(candidate));
    double baseHeight = std::max(smoothSize-abs(leftVal - rightVal), 0.)/smoothSize;
    double offset = ((smoothSize)/6.) *  baseHeight * baseHeight * baseHeight;
    return normalVal + (offset * reverse);
}

Box SmoothDiff::autoBox() const {
    return sons[0]->autoBox();
}