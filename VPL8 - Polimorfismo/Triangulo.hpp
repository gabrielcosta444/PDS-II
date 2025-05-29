#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.hpp"

class Triangulo : public FiguraGeometrica{
    private:
      int base, altura;

    public:
      Triangulo (int base, int altura, Ponto centro);
      virtual void Desenha() override;
      virtual float CalcularArea() override;


};






#endif