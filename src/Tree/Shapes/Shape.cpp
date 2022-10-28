#include <Shape.hpp>
#include <iostream>

bool Shape::addSon(Node son){
    return false;
}

int Shape::getWeight(){
    return 0;
}

double Shape::Value(const Vector& candidate)const{
    std::cerr << "ERROR: this implmentation of autobox should never be reached" << std::endl;
    exit(EXIT_FAILURE);
}

Vector Shape::Gradient(const Vector& point) const {
    std::cerr << "ERROR: this implmentation of autobox should never be reached" << std::endl;
    exit(EXIT_FAILURE);
}

const Box Shape::autoBox() const{
    std::cerr << "ERROR: this implmentation of autobox should never be reached" << std::endl;
    exit(EXIT_FAILURE);
}
