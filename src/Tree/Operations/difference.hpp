#pragma once

#include <BinOp.hpp>

class Difference: public BinOp{
protected:
    Node* getOriginal();
    Node* getRemoved();
public:
    Difference():BinOp{DIFF}{}
    Difference(Node* original, Node* removed):BinOp{DIFF}{
        addSon(original);
        addSon(removed);
    }
    int getWeight();
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};