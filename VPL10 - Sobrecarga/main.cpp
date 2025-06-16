#include <iostream>

using namespace std;

class HeapInt{
    private:
      int * x;
     
    public:
      HeapInt(){
        x = new int(0);
      }
      HeapInt(int n){
        x = new int (n);
      }
      HeapInt(const HeapInt& heapint){
        x = new int(*heapint.x);
      }
      ~HeapInt(){
        delete x;
      }
      HeapInt& operator = (int i){
        *x = i;
        return *this;
      }
      HeapInt& operator = (const HeapInt& heapint){
        *x = *heapint.x;
        return *this;
      }
      HeapInt operator + (const HeapInt& heapint)const{
        HeapInt aux;
        *aux.x = *x + *heapint.x;
        return aux;
      }
      HeapInt operator - (const HeapInt& heapint)const{
        HeapInt aux;
        *aux.x = *x - *heapint.x;
        return aux;
      }
      bool operator == (const HeapInt& heapint){
        if(*x == *heapint.x){
            return true;
        }else{return false;}
      }
      friend ostream& operator << (ostream& os, const HeapInt& heapint){
        os << *heapint.x;
        return os;
      }
      friend istream& operator >> (istream& is, const HeapInt& heapint){
        is >> *heapint.x;
        return is;
      }
};


int main(){
   HeapInt a(10);
   HeapInt b;

   cin >> b;
   if (a==b)
      cout << "Bingo!" << endl;

   HeapInt c = a;
   HeapInt d;
   HeapInt e;
   
   d = 5;
   e = a + b + c + d;
   cout << a << " " << b << " " << c << " " << d << " " << e << endl;
}



