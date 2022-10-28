#pragma once
#include <implicits.h>
#include <vector>
class Node : public AnalyticScalarField{
protected:
    AsfType type;
    std::vector<Node> sons; // penser à prendre le ownership!!!
public:
    Node(AsfType type, std::vector<Node> sons);
    Node(AsfType type);
    virtual bool addSon();
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual Box autoBox();
}