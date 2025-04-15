#include "list.hpp"

#include <iostream>

void List::insertNode(int data) {
    Node* aux = new Node;
    aux->data = data;
    aux->next = nullptr;
    if (head == nullptr) {
        head = aux;
        tail = aux;
    } else {
        tail->next = aux;
        tail = aux;
    }
}

void List::display() {
    Node* aux = head;
    while (aux != nullptr) {
        cout << aux->data << " ";
        aux = aux->next;
    }
    cout << endl;
}

// Você deverá implementar apenas esse método
void List::inverte() {
    int cont = 0;
    tail = head;
    while(tail != nullptr){
        cont++;
        tail = tail -> next;
    }
    tail = head;
    if(cont > 1){
       Node* aux = head;
       for(int i = 0; i < cont - 1; i++){
         head = head -> next;
       }
       int j = 2;
       for(int i = 0; i < cont - 1; i++){
          for(int i = 0; i < cont - j; i++){
            aux = aux -> next;
          }
          aux -> next -> next = aux;
          aux -> next = nullptr;
          aux = tail;   
          j++;
       }
       tail -> next = nullptr;

    }
}

    
    
