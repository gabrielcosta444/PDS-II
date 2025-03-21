#include <iostream>
#include <string>
int main (){
    using namespace std;
    
    string frase, fraseinv;
    

    getline(cin, frase);

    int j = 0;

    for(int i = 0; i < frase.length(); i++){
        if(frase[i] != ' '){
            frase[j] = frase[i];
            j++;
        }    
    }

    frase.resize(j);

    fraseinv = frase;
    
    int k = 0;

    for(int i = frase.length() - 1; i >= 0; i--){
        fraseinv[k] = frase[i];
        k++; 
    }

    if(frase == fraseinv) {
        cout << "Eh palindromo." << endl;
    } else {
        cout << "Nao eh palindromo" << endl;
    }



    return 0;


}
