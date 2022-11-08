#include <smoothInter.hpp>

int SmoothInter::getWeight(){
    return 0;
}

double SmoothInter::Value(const Vector& candidate) const{
    double leftVal = sons[0]->Value(candidate);
    double rightVal = sons[1]->Value(candidate);
    double baseHeight = std::max(smoothSize-abs(leftVal - rightVal), 0.)/smoothSize;
    double offset = ((smoothSize)/6.) *  baseHeight * baseHeight * baseHeight;
    return std::max(leftVal, rightVal) + (offset * reverse);
}

Box SmoothInter::autoBox() const{
    Vector epsiVect = Vector(Epsilon);
    Box sonLeft = sons[0]->autoBox();
    Box sonRight = sons[1]->autoBox();

    Vector a = std::max(sonLeft[0], sonRight[0]) - epsiVect;
    Vector b = std::min(sonLeft[1], sonRight[1]) + epsiVect;
    return Box(a, b);
}