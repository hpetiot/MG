#pragma once

#include <Operation.hpp>

class NOp : public Operation{
public:
    NOp(AsfType type):Operation{-1, type}{}
    NOp(AsfType type, std::vector<Node*> sons):Operation{-1, type, sons}{}
    bool addSon(Node* son){
        sons.emplace_back(son);
        return true;
    }
    virtual int getWeight()=0;
    virtual double Value(const Vector&) const = 0;
    virtual Box autoBox() const =0;
};