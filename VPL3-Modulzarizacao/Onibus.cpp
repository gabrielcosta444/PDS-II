#include "Onibus.hpp"
#include <string>
#include <iostream>

using namespace std;

Onibus::Onibus(string placa, int capacidademaxima){
    this -> placa = placa;
    this -> capacidademaxima = capacidademaxima;
    lotacaoatual = 0;
}

void Onibus::subir_passageiros(int passageiros){
    lotacaoatual += passageiros;
}

void Onibus::descer_passageiros(int passageiros){
    lotacaoatual -= passageiros;
}

void Onibus::transfere_passageiros(Onibus* onibus, int passageiros){
        lotacaoatual -= passageiros;
        onibus->lotacaoatual += passageiros;
}

void Onibus::imprimir_estado(){
    cout << placa << "(" << lotacaoatual << "/" << capacidademaxima << ")" << endl;
}