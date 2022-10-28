#pragma once
#include <Node.hpp>

class Operation : public Node {
private:
    int maxSons;
public:
    Operation(int maxSons);
    virtual bool addSon();
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual Box autoBox();
};

class BinOp : public Operation{
public:
    BinOp();
    bool addSon();
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual Box autoBox();
};

class UnOp : public Operation{
    public:
    UnOp();
    bool addSon();
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual Box autoBox();
};

class N_Op : public Operation{
    public:
    N_Op();
    bool addSon();
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual Box autoBox();
}