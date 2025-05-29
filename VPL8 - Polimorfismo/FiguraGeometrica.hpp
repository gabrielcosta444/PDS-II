#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Ponto.hpp"
#include <iostream>

using namespace std;



class FiguraGeometrica{
    private:
      Ponto centro;

    public:
      FiguraGeometrica(Ponto centro);
      virtual void Desenha();
      virtual float CalcularArea() = 0;

};








#endif






