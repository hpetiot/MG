#include <UnOp.hpp>

int UnOp::getWeight(){
    auto& son = sons.at(0);
    int sonWeight = son->getWeight();
    if(son->getType() == type){
        return sonWeight +1;
    }
    return sonWeight;
}

bool UnOp::addSon(Node* son){
    if(sons.size() == 0){
        sons.emplace_back(son);
        return true;
    }
    return false;
}