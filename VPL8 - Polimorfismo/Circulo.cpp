#include "Circulo.hpp"
#include <cmath>

Circulo :: Circulo(int raio, Ponto centro) : raio(raio), FiguraGeometrica(centro){}

void Circulo :: Desenha(){
    FiguraGeometrica :: Desenha();
    cout << "CIRCULO" << endl;                       
}

float Circulo :: CalcularArea(){
    return M_PI * pow ((this -> raio), 2);
}
