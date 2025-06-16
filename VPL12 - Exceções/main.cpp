#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class NegativeResultException : public exception {
private:
    int valor;

public:
    NegativeResultException(int v) : valor(v) {}

    const char* what() const noexcept override {
        return "Erro: Resultado Negativo.";
    }

    int getValor() const {
        return valor;
    }
};

int main() {

    vector<int> valores = {-20, -10, 0, 10, 20};

    try {
        int indice;
        cout << "Digite o índice: ";
        cin >> indice;

        if (indice < 0 || indice >= static_cast<int>(valores.size())) {
            throw out_of_range("Erro: Parametro invalido");
        }
        
        int resultado = valores.at(indice); 

        if (resultado < 0) {
            throw NegativeResultException(resultado);
        } else if (resultado == 0) {
            throw logic_error("Erro: O resultado não deve ser zero");
        } else {
            cout << "Resultado: " << resultado << endl;
        }

    } catch (const NegativeResultException& e) {
        cout << e.what() << endl;
        cout << e.getValor() << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
