#include <mathematics.h>
#include <mesh.h>
#include <tore.hpp>
int main(){
    Mesh tore;
    Tore T(5.f, 1.5f);
    T.Polygonize(50,tore,  T.autoBox());
    tore.SaveObj("./tore.obj", "");
    return 1;
}
