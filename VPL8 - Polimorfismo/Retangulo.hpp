#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.hpp"

class Retangulo : public FiguraGeometrica{
    private:
      int largura, comprimento;

    public:
      Retangulo(int largura, int comprimento, Ponto centro);
      virtual void Desenha() override;
      virtual float CalcularArea() override;


};






#endif