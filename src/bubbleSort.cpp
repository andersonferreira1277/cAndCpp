#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// troca
void swap (int data[], int index){
    int aux = data[index];
    data[index]=data[index+1];
    data[index+1]=aux;
}//end troca

//bubbleSort
void bubbleSort(int data[], int tam){
    int count = 0;
    for (int i = 0; i < tam -1; i++){
        for (int j = 0; j < tam-1; j++){
            count++;
            if (data[j] > data[j+1]){
                 swap(data, j);
            }
        }
    }
    cout << count << endl;
};//end bubbleSort


int main(){
    int max = 10;
    int data[max] = {};
    srand(time(NULL));
    for (int i = 0; i<max; i++){
        data[i] = rand() % max;
    }
    cout << "Before sorting" << endl;
    for (int i = 0; i< max; i++){
        cout << data[i] << " ";
    }
    cout << endl;
    bubbleSort(data, max);
    cout << "After sort" << endl;
    for (int i = 0; i< max; i++){
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
