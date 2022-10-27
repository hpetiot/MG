# pragma once

#include <implicits.h>
#include <Operations.h>

// incert C like Enum here

class AsfTree: public AnalyticScalarField{
    //ASF
    virtual double Value(Vector& candidate) const;
    virtual Vector Gradient(const Vector& point) const;
    virtual const Box autoBox();
    //tree
    virtual int computeWeght();
    virtual void rearangeTree();
    virtual int getOpType();
};

class AsfNode: public AsfTree{
private:
    Operation op;
    AsfTree left;
    AsfTree right;
public:
    //ASF
    double Value(Vector& candidate) const;
    Vector Gradient(const Vector& point) const;
    const Box autoBox();
    //tree
    int computeWeight();
    void rearangeTree();
    const int getOpType() const;
};

class AsfLeaf: public AsfTree{
private:
    AnalyticScalarField shape;
public:
    //ASF
    double Value(Vector& candidate) const;
    Vector Gradient(const Vector& point) const;
    const Box autoBox();
    // tree
    int computeWeight();
    void rearangeTree();
    const int getOpType() const;
};