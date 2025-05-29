#include "Retangulo.hpp"
#include "Circulo.hpp"
#include "Triangulo.hpp"

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
    vector <FiguraGeometrica*> figurasgeometricas;
    char comando;
    int largura, comprimento, base, altura, raio, x, y;
    while(cin >> comando){
        if(comando == 'R'){
            cin >> x >> y >> largura >> comprimento;
            Ponto centro (x, y);
            figurasgeometricas.push_back(new Retangulo(largura,comprimento,centro));
        }else if(comando == 'C'){
            cin >> x >> y >> raio;
            Ponto centro (x, y);
            figurasgeometricas.push_back(new Circulo(raio, centro));
        }else if(comando == 'T'){
            cin >> x >> y >> base >> altura;
            Ponto centro (x, y);
            figurasgeometricas.push_back(new Triangulo(base, altura, centro));
        }else if(comando == 'D'){
            for(auto i : figurasgeometricas){
                i -> Desenha();
            }
        }else if(comando == 'A'){
            float soma = 0;
            for(auto i : figurasgeometricas){
                soma += i -> CalcularArea();
            }
            cout << soma << endl;
        }else if (comando == 'E'){
            break;
        }

    }

}