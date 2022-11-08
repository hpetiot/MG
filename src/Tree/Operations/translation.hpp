#pragma once

#include <memory>

#include <UnOp.hpp>

class Translation : public UnOp{
private:
    Vector offset;
public:
    Translation(Vector offset):UnOp{TRANS}, offset(offset){}
    Translation(Vector offset, Node* son):UnOp{TRANS}, offset(offset){
        addSon(son);
    }
    double Value(const Vector&) const;
    Box autoBox() const;
};