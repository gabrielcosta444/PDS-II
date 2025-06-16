#include <iostream>
#include <memory>

using namespace std;

class Teste{
    public:
      int x;
      
      Teste() : x(0){
        cout << "Construtor" << " " << x << endl;
      }
      Teste(int i) : x(i){
        cout << "Construtor" << " " << x << endl;
      }
      ~Teste(){
        cout << "Destrutor" << " " << x << endl;
      }

};

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        for(int i = 1; i <= n; i++){
            Teste* normal = new Teste(i);
            unique_ptr <Teste> unique(new Teste(i));
        }
    }else{
        shared_ptr <Teste> shared1(new Teste(0));
        for(int i = 1; i <= n; i++){
            shared_ptr <Teste> shared2 = shared1;
            shared1 -> x = i;
        }
        cout << shared1.use_count() << endl;
    }
}