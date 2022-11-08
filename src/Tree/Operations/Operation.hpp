#pragma once


#include <../Node.hpp>
#include <vector>

class Operation : public Node{
protected:
    int maxSons;
    std::vector<Node*> sons;
public:
    Operation(int maxSons, AsfType type): Node{type}, maxSons(maxSons){}
    Operation(int maxSons, AsfType type, std::vector<Node*> sons): Node{type}, maxSons(maxSons), sons(sons){}
    virtual int getWeight() = 0;
    virtual bool addSon(Node* son) = 0;
    virtual double Value(const Vector&) const = 0;
    virtual Box autoBox() const =0;
};