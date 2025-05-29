#include "Triangulo.hpp"

Triangulo :: Triangulo(int base, int altura, Ponto centro) : base(base), altura(altura), FiguraGeometrica(centro){}

void Triangulo :: Desenha(){
    FiguraGeometrica :: Desenha();
    cout << "TRIANGULO" << endl;                       
}

float Triangulo :: CalcularArea(){
    return (this -> base * this-> altura) / 2;
}
