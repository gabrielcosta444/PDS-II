#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cctype>

 
using namespace std;

int main (){
    vector <string> palavras; 
    vector <int> cont;
    string frase;
    string palavra;
    
    ifstream arquivo("../teste.txt");
 
    if(!arquivo.is_open()){
        cerr << "Erro ao abrir arquivo." << endl;
        return 1;
    }

    while(getline(arquivo, frase)){
            palavra = "";
            for(char c : frase){
                if(isalnum(c)){
                    palavra += tolower(c);
                }else{
                    if(palavra.length() > 0){
                      bool repetida = false;
                      for(int i = 0; i < palavras.size(); i ++){
                        if(palavra == palavras[i]){
                         cont[i]++;
                         repetida = true;
                         break;
                        }
                      }
                      if(repetida == false){
                        palavras.push_back(palavra);
                        cont.push_back(1);
                      }
                      palavra.clear();
                    }
                }
            }
            if(palavra.length() > 0){
                bool repetida = false;
                for(int i = 0; i < palavras.size(); i ++){
                  if(palavra == palavras[i]){
                   cont[i]++;
                   repetida = true;
                   break;
                  }
                }
                if(repetida == false){
                  palavras.push_back(palavra);
                  cont.push_back(1);
                } 
            }
            
    }

    for(int i = 0; i < palavras.size(); i++){
        cout << palavras[i] << " " << cont[i] << endl;
    }

    return 0;

}