#include <iostream>
#include <stdlib.h>

using namespace std;

struct node {
    int data;
    node *next;
};

typedef node* nodeType;

class LinkedList{
private:

    nodeType head;

public:

    LinkedList(){
        head = NULL;
    }

    bool isEmpty(){
        return (head==NULL);
    }

    void display(){
        nodeType temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << '\n';
    }

    void insert(int value){
        nodeType temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    nodeType search(int value){
        if (!isEmpty()){
            nodeType temp = head;
            while (temp != NULL){
                if (temp->data == value){
                    return temp;
                } else {
                    temp = temp->next;
                }
            }
        }
        return NULL;
    }

    void remove(int value){
        if (!isEmpty()){
            nodeType current = head;
            nodeType previous = NULL;
            while (current != NULL){
                if (current->data == value){
                    previous->next = current->next;
                }
                previous = current;
                current = current->next;
            }
        }
    }

    ~LinkedList (){
        nodeType current = head;
        nodeType previous = new node;
        while (current->next != NULL) {
            previous = current;
            current = current->next;
            delete previous;
        }
    }
};

int main(int argc, char const *argv[]) {
    LinkedList lista;
    int maxSize = 50;
    srand(time(NULL));

    for (int i=0; i < maxSize; i++){
        lista.insert(rand() % maxSize);
    }
    lista.display();
    int value = 6;
    nodeType temp = lista.search(value);
    if (temp != NULL){
        cout << "Elemento " << value << " Encontrado" << endl;
    }else {
        cout << "Elemento " << value << " não encontrado!" << endl;
    }
    lista.remove(5);
    lista.display();
    lista.remove(48);
    lista.display();


    return 0;
}