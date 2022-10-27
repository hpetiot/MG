#include <Translation.hpp>

Translation::Translation(Vector offset):offset(offset){}

Vector Translation::Gradient(const Vector& point){

}

const Box Translation::autoBox(Box boxOne, Box DiScArD){
    boxOne.Translate(offset);
    return boxOne;
}

double Translation::Value(const Vector& candidate, AnalyticScalarField objOne,  AnalyticScalarField DiScArD){
    return objOne.Value(candidate - offset);
}
