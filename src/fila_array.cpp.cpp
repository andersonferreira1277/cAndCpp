#include <iostream>

using namespace std;

class QueueArray {
private:
    int *data;
    int head;
    int tail;
    int size;
    int max;

public:
    QueueArray(int maxValue){
        head = 0;
        tail = -1;
        size = 0;
        max = maxValue;
        data = new int[max];
    }

    ~QueueArray(){
        delete []data;
    };

    bool isEmpty(){
        return size == 0;
    };

    bool isFull(){
        return size == max;
    };

    void enqueue(int value){
        if (!isFull()){
            tail ++;
            data[tail] = value;
            size++;
        } else {
            cout << "Fila está cheia!" << endl;
        }
    };

    void dequeue(){
        if (!isEmpty()){
            head++;
            size--;
        } else {
            cout << "Fila vazia!" << endl;
        }
    };

    void display(){
        if (!isEmpty()){
            for (int i = head; i <= tail; i++){
                cout << data[i] << endl;
            }
            cout << endl;
        } else {
            cout << "Fila está vazia" << endl;
        }
    };


};

int main(int argc, char const *argv[]) {
    int max = 15;

    QueueArray q(max);
    q.enqueue(2);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(4);
    q.display();
    q.enqueue(6);
    q.display();
    q.enqueue(8);
    q.display();
    q.enqueue(10);
    q.display();
    q.enqueue(12);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}