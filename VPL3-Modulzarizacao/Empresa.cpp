#include "Empresa.hpp"
#include "Onibus.hpp"
#include <iostream>
#include <string>

using namespace std;

Empresa::Empresa(){
    onibuscadastrados = 0;
    for(int i = 0; i < 20; i++){
        onibuslista[i] = nullptr;
    }
}

Onibus* Empresa::adicionar_onibus(string placa, int capacidademaxima){
    if(onibuscadastrados < 20 && Empresa::busca_onibus(placa) == nullptr){
        Onibus* novoonibus = new Onibus(placa, capacidademaxima);
        onibuslista[onibuscadastrados] = novoonibus;
        onibuscadastrados++;
        return novoonibus;
    }else{ 
        return nullptr;
    }
}

Onibus* Empresa::busca_onibus(string placa){
    for(int i = 0; i < onibuscadastrados; i++){
        if(onibuslista[i]->placa == placa){
            return onibuslista[i];
        }
    }
    return nullptr;
}

void Empresa::imprimir_estado(){
    for(int i = 0; i < onibuscadastrados; i++){
        onibuslista[i]->imprimir_estado();
    }
}



