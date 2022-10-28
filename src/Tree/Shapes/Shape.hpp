#pragma once
#include <../Node.hpp>

class Shape : public Node{
public:
    // Shape();
    virtual double Value(const Vector& candidate)const;
    virtual Vector Gradient(const Vector& point)const;
    virtual const Box autoBox()const;
    bool addSon(Node son);
    int getWeight();
};