#ifndef EMPRESA_H
#define EMPRESA_H
#include "Onibus.hpp"
#include <string>

struct Empresa{
    int onibuscadastrados;
    Onibus* onibuslista[20];

    Empresa();
    Onibus* adicionar_onibus(string, int);
    Onibus* busca_onibus(string);
    void imprimir_estado();
};

#endif