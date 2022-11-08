#include <translation.hpp>


double Translation::Value(const Vector& candidate) const{
    return sons[0]->Value(candidate - offset);
}

Box Translation::autoBox() const{
    Box sonsBox = sons[0]->autoBox();
    sonsBox.Translate(offset);
    return sonsBox;
}