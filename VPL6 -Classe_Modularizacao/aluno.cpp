#include "aluno.hpp"
#include <algorithm>


using namespace std;

Aluno :: Aluno(string nome, int matricula, vector<int> notas){
    this -> nome = nome;
    this -> matricula = matricula;
    this -> notas = notas;
}

float Aluno :: CalculaMedia(){
    if(!notas.empty()){
        float soma = 0;
        for(int i = 0; i < notas.size(); i++){
          soma += notas[i];
        } 
        return soma / notas.size();
    }else{return 0;}
}

int Aluno::RetornaMax() {
    return *max_element(notas.begin(), notas.end());
}

int Aluno::RetornaMin() {
    return *min_element(notas.begin(), notas.end());
}


string Aluno::getNome() const {
    return nome;
}

int Aluno::getMatricula() const {
    return matricula;
}

vector<int> Aluno::getNotas() const {
    return notas;
}

bool Aluno::operator<(const Aluno& outro) const {
    return nome < outro.nome;
}
