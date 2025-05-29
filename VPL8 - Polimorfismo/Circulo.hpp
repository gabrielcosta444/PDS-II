#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.hpp"

class Circulo : public FiguraGeometrica{
    private:
      int raio;

    public:
      Circulo (int raio, Ponto centro);
      virtual void Desenha() override;
      virtual float CalcularArea() override;


};






#endif