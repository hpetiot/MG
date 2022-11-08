#pragma once

#include <Operation.hpp>

class BinOp : public Operation{
public:
    BinOp(AsfType type):Operation{2, type}{}
    BinOp(AsfType type, std::vector<Node*> sons):Operation{2, type, sons}{}
    bool addSon(Node* son){
        if(sons.size() < maxSons){
            sons.emplace_back(son);
            return true;
        }
        return false;
    }
    virtual int getWeight() = 0;
    virtual double Value(const Vector&) const = 0;
    virtual Box autoBox() const =0;
};