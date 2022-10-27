#pragma once
#include <implicits.h>

class Operation{
protected:
    int opType;
public:
    virtual double Value(AnalyticScalarField sdfOne, AnalyticScalarField sdfTwo);
    virtual Vector Gradient(Vector& point);
    virtual const Box autoBox();
    const int getOpType() const{
        return opType;
    };
};

class BinOp : public Operation{
private:
    const int type;
public:
    virtual double Value(AnalyticScalarField sdfOne, AnalyticScalarField sdfTwo);
    virtual Vector Gradient(const Vector& point);
    virtual const Box autoBox(Box boxOne, Box boxTwo);
};

class UnOp : public Operation{
private:
    const int type;
public:
    virtual double Value(const Vector& candidate, AnalyticScalarField sdfOne, AnalyticScalarField DiScArD);
    virtual Vector Gradient(const Vector& point);
    virtual const Box autoBox(Box boxOne, Box DiScArD);
};