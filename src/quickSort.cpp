#include <iostream>
#include <time.h>

using namespace std;

//funções
void troca(int data[], int i, int j);
int particionamento(int data[], int low, int high);
void quickSort(int data[], int low, int high);
//end funções

int main() {  
    int max = 10;
    int data[max] = {};
    srand(time(NULL));
    for (int i = 0; i<max; i++){
      data[i] = rand() % max;
    }
    cout << "Before sorting" << endl;
    for (int i =0; i < max; i++){
      cout << data[i] << endl;
    }
    cout << endl;
    quickSort(data, 0, max-1);
    cout << "After sorting" << endl;
    for (int i = 0; i<max; i++){
      cout << data[i] << endl;
    }
    cout << endl;
    return 0;
}

//trocar
void trocar(int data[], int i, int j){
    int t = data[i];
    data[i] = data[j];
    data[j] = t;
}//end troca

int particionamento(int data[], int low, int high){
    int pivo = data[high];
    int i = (low-1);
    for (int j= low; j<=high-1;j++){
      if (data[j]<=pivo){
        i++;
        trocar(data, i, j);
      }
    }
    trocar(data, (i+1),high);
    return (i+1);
}

void quickSort(int data[], int low, int high){
    if (low < high){
      int pi  = particionamento(data, low, high); // pi = partition index
      quickSort (data, low, pi-1); // sort before pivo
      quickSort (data, pi+1, high); // sort after pivo
    }
}
