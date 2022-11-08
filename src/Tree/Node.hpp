#pragma once

#include <memory>
#include <utility>
#include <vector>

#include <implicits.h>

enum AsfType{
    ROOT,
    SHAPE,
    UNION,
    S_UNION,
    INTER,
    DIFF,
    S_DIFF,
    TRANS,
    ROT,
    SCALE
};

class Node : public AnalyticScalarField{
protected:
    AsfType type;
public:
    Node(AsfType type):type(type){}
    ~Node(){}
    AsfType getType(){return type;}
    virtual bool addSon(Node* son) = 0;
    virtual int getWeight() = 0;
    virtual double Value(const Vector&) const = 0;
    virtual Box autoBox() const =0;
};