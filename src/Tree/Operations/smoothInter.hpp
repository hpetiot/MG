#pragma once

#include <BinOp.hpp>

class SmoothInter : public BinOp{
private:
    double smoothSize;
    int reverse = 1;
protected:
    int getSmoothSize();
public:
    SmoothInter(double smoothSize, bool reversed = false):smoothSize(smoothSize), BinOp{S_INTER}{
        if(reversed){
            reverse = -1;
        }
    }

    SmoothInter(double smoothSize, Node* left, Node* right, double resversed = false):smoothSize(smoothSize), BinOp{S_INTER}{
        if(resversed){
            reverse = -1;
        }
        addSon(left);
        addSon(right);
    }
    int getWeight();
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};