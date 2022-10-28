#pragma once
#include <Node.hpp>

class Shape : public Node{
public:
    Shape();
    bool addSon();
    int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual Box autoBox();
}