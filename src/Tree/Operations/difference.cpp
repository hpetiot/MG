#include <difference.hpp>

Node* Difference::getOriginal(){
    return sons.at(0);
}

Node* Difference::getRemoved(){
    return sons.at(1);
}

int Difference::getWeight(){
    if(sons.at(0)->getType() == type){
        return sons.at(0)->getWeight() + 1;
    }
    return sons.at(0)->getWeight();
}

double Difference::Value(const Vector& candidate) const {
    return std::max(-sons[1]->Value(candidate), sons[0]->Value(candidate));
}

Box Difference::autoBox() const {
    return sons[0]->autoBox();
}