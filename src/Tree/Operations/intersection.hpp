#pragma once

#include <NOp.hpp>

class Intersection : public NOp{
public:
    Intersection():NOp{INTER}{}
    Intersection(std::vector<Node*> sons):NOp{INTER, sons}{}
    bool addSon(Node* son);
    int getWeight();
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};