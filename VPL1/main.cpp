#include<iostream>
#include<string>
#include<fstream>

char minuscula(char letra) {
    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + ('a' - 'A'); 
    }
    return letra;
}

int main(){
    using namespace std;
    int n;
    int chave;
    string palavrachave;
    ifstream arquivo("../palavras.txt");
 
    if(!arquivo.is_open()){
        cerr << "Erro ao abrir arquivo." << endl;
        return 1;
    }

    arquivo >> n;

    cout << "Digite a chave: " << endl; 

    cin >> chave;


    for(int i = 1; i <= chave; i++){
        arquivo >> palavrachave;
    }

    string palavratentativa;
    string saida = "***** ()";
    bool vitoria = false;
    bool possuiletra;
    int letraserradas = 0;

    cout << palavrachave << endl;

    for(int i = 0; i < 5; i++){
        cout << "Digite sua tentativa: " << endl;
        cin >> palavratentativa;
        saida[0] = '*'; saida[1] = '*'; saida[2] = '*'; saida[3] = '*'; saida[4] = '*';
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                possuiletra = false;
                if(palavratentativa[j] == palavrachave[k]){
                    possuiletra = true;
                    if(j == k){
                      saida[j] = palavratentativa[j];
                    }else{
                      saida[j] = minuscula(palavratentativa[j]);  
                    }
                }
                if(possuiletra == false){
                    letraserradas++;
                    bool letrarepetida = false;
                    for(int i = 7; i <= 7 + letraserradas; i++){
                        if(saida[i] == palavratentativa[j]){
                            letrarepetida = true;
                        }
                    }
                    if(letrarepetida == false){
                        saida += ')';
                        saida[7 + letraserradas] = palavratentativa[j]; 
                    }
                }
            }
        }
        cout << saida << endl;
        if(saida[0] != '*' && saida[1] != '*' && saida[2] != '*' && saida[3] != '*' && saida[4] != '*' ){
            vitoria = true;
            cout << "GANHOU!" << endl;
            break;
        }
    }

    if(vitoria == false){
        cout << "PERDEU!" << endl;
    }

    arquivo.close();



    return 0;
}