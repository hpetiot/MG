#pragma once
#include <Node.hpp>

class Operation : public Node {
protected:
    int maxSons;
public:
    Operation(AsfType type, std::vector<Node> sons, int maxSons):Node(type, sons), maxSons(maxSons){
        if(sons.size() <= maxSons){
            throw std::invalid_argument("too many sons for this operation.");
        }
    }
    Operation(AsfType type, int maxSons):Node(type, std::vector<Node>{}), maxSons(maxSons){}
    virtual bool addSon(Node son);
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual const Box autoBox();
};

class BinOp : public Operation{
public:
    bool addSon(Node son);
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual const Box autoBox();
};

class UnOp : public Operation{
public:
    UnOp(AsfType type, Node son):Operation(type, std::vector<Node>{son}, 1){};
    UnOp(AsfType type): Operation(type, 1){};
    bool addSon(Node son);
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual const Box autoBox();
};

class N_Op : public Operation{
public:
    N_Op(AsfType type):Operation(type, std::vector<Node>{}, INFINITY){}
    N_Op(AsfType type, Node son):Operation(type, std::vector<Node>{son}, INFINITY){}
    N_Op(AsfType type, Node sonLeft, Node sonRight):Operation(type, std::vector<Node>{sonLeft, sonRight}, INFINITY){};
    N_Op(AsfType type, std::vector<Node> sons):Operation(type, sons, INFINITY){}
    bool addSon(Node son);
    virtual int getWeight();
    virtual double Value(const Vector& candidate);
    virtual Vector Gradient(const Vector& point);
    virtual const Box autoBox();
};