#include "Retangulo.hpp"

Retangulo :: Retangulo(int largura, int comprimento, Ponto centro) : largura(largura), comprimento(comprimento), FiguraGeometrica(centro){}

void Retangulo :: Desenha(){
    FiguraGeometrica :: Desenha();
    cout << "RETANGULO" << endl;                       
}

float Retangulo :: CalcularArea(){
    return this -> comprimento * this -> largura;
}
