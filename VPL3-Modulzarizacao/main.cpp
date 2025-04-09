#include<iostream>
#include "Empresa.hpp"
#include "Onibus.hpp"
#include<string>

using namespace std;

int main() {
    Empresa empresa;
    char comando;
    string placa1 = "XXXXXX";
    string placa2 = "XXXXXX";
    int pessoas;

    while (cin >> comando) { 
        if (comando == 'C') {
            cin >> placa1 >> pessoas;
            if (empresa.onibuscadastrados < 20 && empresa.busca_onibus(placa1) == nullptr) {
                empresa.adicionar_onibus(placa1, pessoas);
                cout << "novo onibus cadastrado" << endl;
            } else {
                cout << "ERRO : onibus repetido" << endl;
            }

        } else if (comando == 'S') {
            cin >> placa1 >> pessoas;
            if (empresa.busca_onibus(placa1) != nullptr) {
                if (empresa.busca_onibus(placa1)->lotacaoatual + pessoas <= empresa.busca_onibus(placa1)->capacidademaxima) {
                    empresa.busca_onibus(placa1)->subir_passageiros(pessoas);
                    cout << "passageiros subiram com sucesso" << endl;
                } else {
                    cout << "ERRO : onibus lotado" << endl;
                }
            } else {
                cout << "ERRO : onibus inexistente" << endl;
            }

        } else if (comando == 'D') {
            cin >> placa1 >> pessoas;
            if (empresa.busca_onibus(placa1) != nullptr) {
                if (empresa.busca_onibus(placa1)->lotacaoatual - pessoas >= 0) {
                    empresa.busca_onibus(placa1)->descer_passageiros(pessoas);
                    cout << "passageiros desceram com sucesso" << endl;
                } else {
                    cout << "ERRO : faltam passageiros" << endl;
                }
            } else {
                cout << "ERRO : onibus inexistente" << endl;
            }

        } else if (comando == 'T') {
            cin >> placa1 >> placa2 >> pessoas;
            if ((empresa.busca_onibus(placa1) != nullptr && empresa.busca_onibus(placa2) != nullptr) &&
                (empresa.busca_onibus(placa1)->lotacaoatual - pessoas >= 0) &&
                (empresa.busca_onibus(placa2)->lotacaoatual + pessoas <= empresa.busca_onibus(placa2)->capacidademaxima)) {

                empresa.busca_onibus(placa1)->transfere_passageiros(empresa.busca_onibus(placa2), pessoas);
                cout << "transferencia de passageiros efetuada" << endl;

            } else if ((empresa.busca_onibus(placa1)->lotacaoatual - pessoas < 0) ||
                       (empresa.busca_onibus(placa2)->lotacaoatual + pessoas > empresa.busca_onibus(placa2)->capacidademaxima)) {
                cout << "ERRO : transferencia cancelada" << endl;
            } else {
                cout << "ERRO : onibus inexistente" << endl;
            }

        } else if (comando == 'l') {
            empresa.imprimir_estado();

        } else if (comando == 'F') {
            break;
        }
    }

    return 0;
}
