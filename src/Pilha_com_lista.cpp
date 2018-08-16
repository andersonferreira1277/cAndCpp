#include <iostream>
using namespace std;


struct node{
    int data;
    struct node *next;
};

class StackList{
private:
    struct node *top;

public:
    StackList(){
        top = NULL;
    };

    ~StackList(){
        top = NULL;
    };

    void push(int value){
        struct node *temp;
        temp = new node;
        temp->data = value;
        temp->next = NULL;

        if (top != NULL){
            temp->next = top;
        }
        top = temp;
    };

    int pop(){
        struct node *temp;
        int value = -1;
        if (!isEmpy()){
            temp = top;
            top = temp->data;
            delete temp;
            return value;
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    };

    bool isEmpty(){
        return (top == NULL);
    };

    int topValue(){
        it (!isEmpty()){
            return top->data;
        }
    };

    /*void display(){

    };*/

};

int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}