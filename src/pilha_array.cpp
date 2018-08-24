#include <iostream>
using namespace std;


class StackArray{

private:
    int *data;
    int top;
    int max;

public:
    StackArray(int max){
        data = new int[max];
        top = 0;
        this->max = max;
    }

    ~StackArray(){
        delete []data;
    }

    void push(int value){
        if ( !isFull()){
            data[top++] = value;
        } else {
            cout << "Stack is full" << endl;
        }
    }

    bool isFull(){
        return (top == max);
    }

    int pop(){
        if (!isEmpty()){
            return data[--top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        return (top == 0);
    }

    int topValue(){
        if (!isEmpty()){
            int value = data[--top];
            top++;
            return value;
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    void display(){
        if (!isEmpty()){
            for (int i = 0; i < top; i++){
                cout << data[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

};


int main(int argc, char const *argv[]) {
    int maxSize = 5;
    StackArray arr(maxSize);

    arr.display();

    arr.push(1);
    arr.display();
    arr.push(2);
    arr.display();
    arr.push(3);
    arr.display();
    int v = arr.pop();
    cout << "Pop: " << v << endl;
    arr.display();
    v = arr.topValue();
    cout << "Top: " << v << endl;
    arr.display();


    return 0;
}