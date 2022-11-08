#pragma once

#include <Operation.hpp>

class UnOp : public Operation{
public:
    UnOp(AsfType type):Operation{1, type}{}
    int getWeight();
    bool addSon(Node* son);
    virtual double Value(const Vector&) const = 0;
    virtual Box autoBox() const =0;
};