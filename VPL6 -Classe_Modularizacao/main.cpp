#include "aluno.hpp"
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    string nome;
    int matricula;
    string linhanotas;
    vector <Aluno> alunos;

    while(getline(cin, nome)){
        if(nome == "END"){
            break;
        }
        cin >> matricula;
        cin.ignore();
        getline(cin, linhanotas);

        vector <int> notas;

        istringstream iss(linhanotas);
        int nota;
        while(iss >> nota && nota != -1){
            notas.push_back(nota);
        }

        Aluno aluno (nome, matricula, notas);
        alunos.push_back(aluno); 
    }

    sort(alunos.begin(), alunos.end());

    for(int i = 0; i < alunos.size(); i++){
        cout << alunos[i].getMatricula() << " " << alunos[i].getNome() << " ";
        for(int n : alunos[i].getNotas()){
            cout << n << " ";
        }
        cout << endl;
        cout << alunos[i].CalculaMedia() << " " << alunos[i].RetornaMax() << " " << alunos[i].RetornaMin() << endl; 
    }


    return 0;



}