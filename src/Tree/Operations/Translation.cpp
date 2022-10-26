#include <Translation.hpp>

double Translation::Value(Vector candidate, AnalyticScalarField obj){
    return obj.Value(candidate - translation);
}

Vector Gradient(Vector point){
    return obj.Gradient(point - translation)
}

Box autoBox(){
    return obj.autoBox().Translate(translation);
}