#pragma once

#include <implicits.h>
#include <vector>

enum AsfType{
    SHAPE,
    UNION,
    INTER,
    DIFF,
    TRANS,
    ROT,
    SCALE
};

class Node : public AnalyticScalarField{
protected:
    AsfType type;
    std::vector<Node> sons; // penser à prendre le ownership!!!
public:
    Node(AsfType type);                            // needed bec the X-child will call it to fill the protected filds. 
    Node(AsfType type, std::vector<Node> sons);    // needed bec the X-child will call it to fill the protected filds. 
    virtual bool addSon(Node son);
    virtual int getWeight();
    virtual double Value(const Vector& candidate) const;
    virtual Vector Gradient(const Vector& point) const;
    virtual const Box autoBox() const;
};