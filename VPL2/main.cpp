#include <iostream>

// 0) Crie uma função que receba três variveis inteiras como parâmetro, da seguinte forma:
//    - A primeira deve ser passada por referência 
//    - A segunda deve ser passada "por referência" usando apontadores (passgem "por referência" disponível em C)
//    - A terceira deve ser passada por valor
//   A função deverá incrementar em 1 o valor das 3 variáveis e retornar.

int RecebeVariaveis(int &x, int *y, int z){
    x += 1;
    (*y) += 1;
    z += 1;
    return;
}


int main(){

    using namespace std;

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    
    int a;
    cout << "Informe o valor de 'a': " << endl;
    cin >> a;
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo

    int *pont = nullptr;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    
    int tam;
    cout << "Informe o tamanho do vetor: " << endl;
    cin >> tam;
    int vet[tam];
    for(int i = 0; i < tam; i++){
        cout << "Informe o elemento do vetor: " << endl;
        cin >> vet[i];
    }
    
    // 4) Imprima o ENDEREÇO da variável declarada em (1)

    cout << &a << endl;
    
    // 5) Imprima o VALOR da variável declarada em (1)

    cout << a << endl;
    
    // 6) Imprima o ENDEREÇO da variável declarada em (2)

    cout << &pont << endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)

    cout << pont << endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)

    cout << &vet[0] << endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)

    cout << &vet[0] << endl;
    
    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)

    cout << vet[0] << endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    
    pont = &a;

    // 12) Imprima o VALOR da variável declarada em (2)
    
    cout << pont << endl;
    
    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    
    cout << *pont << endl;

    // 14) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    
    *pont = 5;

    // 15) Imprima o VALOR da variável declarada em (1)
     
    cout << a << endl;

    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    
    pont = vet;

    // 17) Imprima o VALOR da variável declarada em (2)
    
    cout << pont << endl;

    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    
    cout << *pont << endl;

    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    
    pont = &vet[0];

    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
     
    if(pont == vet){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    // 21) Imprima o VALOR da variável declarada em (2)

    cout << pont << endl;
    
    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    
    cout << &pont << endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    
    for(int i = 0; i < tam; i++){
        *(pont + i) *= 10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    
    for(int i = 0; i < tam; i++){
        cout << vet[i] << endl; 
    }

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    
    for(int i = 0; i < tam; i++){
        cout << *(vet + i) << endl;
    }

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (2)
    
    for(int i = 0; i < tam; i++){
        cout << *(pont + i) << endl;
    }

    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    
    pont = &vet[tam-1];

    // 28) Imprima o VALOR da variável declarada em (2)
    
    cout << pont << endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    
    cout << *pont << endl;

    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    
    int **pont2 = &pont;

    // 31) Imprima o VALOR da variável declarada em (30)
    
    cout << pont2 << endl;

    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    
    cout << &pont2 << endl;

    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    
    cout << *pont2 << endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    
    cout << **pont2 << endl;

    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada

    int b, c, d;
    cin >> b;
    cin >> c;
    cin >> d;

    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro.

    RecebeVariaveis(b, &c, d);

    // 37) Imprima o valor das 3 variáveis criadas em 35, uma por linha
    
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}