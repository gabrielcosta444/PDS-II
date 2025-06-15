#ifndef VETOR_HPP
#define VETOR_HPP
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Vetor{
    private:
      int numelementos, max;
      T* vetor;
    
    public:
      Vetor(int n) : max(n), numelementos(0){
        vetor = new T[max];
      }
      Vetor(const Vetor<T>& outrovetor) : numelementos(outrovetor.numelementos), max(outrovetor.max){
        vetor = new T[max];
        for(int i = 0; i < numelementos; i++){
          vetor[i] = outrovetor.vetor[i];
        }
      }
      ~Vetor() {
        delete[] vetor;
      }
      void SetElemento(int i, T x){
        vetor[i] = x;
      }
      T GetElemento(int i){
        return vetor[i];
      }
      void AdicionaElemento(T x){
        vetor[numelementos] = x;
        numelementos++;
      }
      void Imprime(){
        for (int i = 0; i < numelementos; i++) {
            cout << vetor[i] << " ";
        }
        cout << endl;
      }

};



#endif