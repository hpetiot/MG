#pragma once

#include <BinOp.hpp>

class SmoothUnion: public BinOp{
private:
    double smoothSize;
    int reverse = 1;
protected:
    double getSmoothSize();
public:
    SmoothUnion(double smoothSize, bool reversed = false):BinOp{S_UNION}, smoothSize(smoothSize){
        if(reversed){
            reverse = -1;
        }
    }
    SmoothUnion(double smoothSize, std::vector<Node*> sons, bool reversed=false):BinOp{S_UNION, sons}, smoothSize(smoothSize){
        if(reversed){
            reverse = -1;
        }
    }
    int getWeight();
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};