#ifndef ONIBUS_H
#define ONIBUS_H
#include<string>

using namespace std;

struct Onibus{
    int capacidademaxima, lotacaoatual;
    string placa;

    Onibus(string placa, int capacidademaxima);
    void subir_passageiros(int);
    void descer_passageiros(int);
    void transfere_passageiros(Onibus*, int);
    void imprimir_estado();
};

#endif