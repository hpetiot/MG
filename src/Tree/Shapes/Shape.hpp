#pragma once

#include <../Node.hpp>

class Shape: public Node {
public:
    Shape():Node{SHAPE}{}
    int getWeight(){return 0;}
    bool addSon(Node* son);
    virtual double Value(const Vector&) const = 0;
    virtual Box autoBox() const =0;
};