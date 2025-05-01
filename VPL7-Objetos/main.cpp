#include <iostream>
#include <list>
using namespace std;

class MyClass {
private:
    int id;
    static int proximoId;
    static int numobjetos;

public:
    MyClass() {
        id = ++proximoId;
        ++numobjetos;
    }

    MyClass(int idPersonalizado) {
        if (idPersonalizado < 0) {
            id = idPersonalizado;
        } else {
            throw invalid_argument("Apenas IDs negativos são permitidos como parâmetro.");
        }
        ++numobjetos;
    }

    ~MyClass() {
        --numobjetos;
    }

    int getId() const {
        return id;
    }

    static int getObjetos() {
        return numobjetos;
    }

    const void* getEndereco() const {
        return static_cast<const void*>(this);
    }
};

int MyClass::proximoId = 0;
int MyClass::numobjetos = 0;

int main(){
    list <MyClass*> objetos;
    string comando;
    while(cin >> comando){
        if(comando == "E"){
            break;
        }else if(comando == "A"){
            MyClass* objeto = new MyClass();
            objetos.push_back(objeto);
            cout << objeto->getId() << " " << objeto->getEndereco() << endl;
        }else if(comando == "C"){
            int id;
            cin >> id;
            if(id > 0){
                cout << "ERRO" << endl;
            }else{
                MyClass* objeto = new MyClass(id);
                objetos.push_front(objeto);
                cout << objeto->getId() << " " << objeto->getEndereco() << endl;
            }
        }else if(comando == "R"){
            if(objetos.empty()){
                cout << "ERRO" << endl;
            }else{
                auto it = objetos.begin();
                cout << (*it)->getId() << " " << (*it)->getEndereco() << endl;
                delete *it;
                objetos.pop_front();
            }
        }else if(comando == "N"){
            cout << MyClass::getObjetos() << endl;
        }else if (comando == "P"){
            int posicao;
            cin >> posicao;
            if(posicao < 1 || posicao > objetos.size()){
                cout << "ERRO" << endl;
            }else{
                auto it = objetos.begin();
                advance(it, posicao - 1);
                cout << (*it)->getId() << " " << (*it)->getEndereco() << endl;                
            }
        }else if(comando == "L"){
            for(auto it = objetos.begin(); it != objetos.end(); it++){
                cout << (*it)->getId() << " " << (*it)->getEndereco() << endl;   
            }
        }else{
            cout << "Comando inválido." << endl;
        }
    }

    for(auto ptr : objetos){
        delete ptr;
    }
}
