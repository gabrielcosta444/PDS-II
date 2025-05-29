#include "Ponto.hpp"

Ponto :: Ponto(int x, int y) : x(x), y(y){}

int Ponto :: getX() const{
    return x;
}

int Ponto :: getY() const{
    return y;
}

void Ponto :: setX(int x){
    this -> x = x;
}

void Ponto :: setY(int y){
    this -> y = y;
 }




