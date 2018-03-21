#include <iostream>

using namespace std;

int main() {
  int max = 10;
  int data[max] = {}; // int data[max];
  data[0] = 12;
  data[3] = 10;
  data[5] = 23;

  for (int j=0; j<max; j++){
    cout << data[j] << " ";
  }
  cout << endl;
  data[3] = 0; //remover
  system("pause");

  return 0;
}
