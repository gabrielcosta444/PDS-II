#include "FiguraGeometrica.hpp"

FiguraGeometrica :: FiguraGeometrica(Ponto centro) : centro(centro){}

void FiguraGeometrica :: Desenha(){
    cout << this -> centro.getX() << " " << this -> centro.getY() << " ";
}

