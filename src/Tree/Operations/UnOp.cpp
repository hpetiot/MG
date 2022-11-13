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
    if(sons.size() < maxSons){
        sons.emplace_back(son);
        return true;
    }
    std::cout << "addson OUT didn't add son" << std::endl;
    return false;
}