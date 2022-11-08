#pragma once

#include <BinOp.hpp>

class SmoothDiff: public BinOp{
private:
    double smoothSize;
    int reverse = 1;
protected:
    int getSmoothSize();
    Node* getOriginal();
    Node* getRemoved();
public:
    SmoothDiff(double smoothSize, bool reversed=false):BinOp{S_DIFF}, smoothSize(smoothSize){
        if(reversed){
            reverse = -1;
        }
    }
    SmoothDiff(double smoothSize, Node* original, Node* removed, bool reversed=false):BinOp{S_DIFF}, smoothSize(smoothSize){
        if(reversed){
            reverse = -1;
        }
        addSon(original);
        addSon(removed);
    }
    int getWeight();
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};