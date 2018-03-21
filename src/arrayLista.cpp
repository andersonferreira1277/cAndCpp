#include <iostream>

using namespace std;

class Array{
  private:
    int size;
    int *data;
    // end private


  public:
    // codigo aqui


    //constructor
    Array(int max){
      size = 0;
      data = new int [max];
    }// end constructor

    //insert value
    void insert(int value){
      data[size] = value;
      size++;
    }//end insert

    //find
    bool find(int searchKey){
      int j;
      for (j=0; j<size; j++) {
        if( data[j]==searchKey ){
          return true;//achou
        }
      }
      return false;// não achou
    } //end find

    //remover
    bool remove(int value){
      int j;
      for (j=0; j<size; j++){
        if ( data[j]==value){
          break;
        }
      }
      if (j==size){
        return false;
      } else{
        for (int k = j; k<size; k++){
          data[k] = data[k+1];
        }
      }
      size--;
      return true;
    }//end remover

    //imprimir
    void imprimir(){
      for(int j = 0; j<size; j++){
        cout << data[j] << endl;
      }
      cout << endl;
    }//end imprimir

    //destructor
    ~Array(){
      delete []data;
    }
};


// function Main
int main() {
  int maxSize = 100;
  Array arr(maxSize);

  arr.imprimir();
  arr.insert(77);
  arr.insert(99);
  arr.insert(44);
  arr.insert(55);
  arr.insert(22);
  arr.insert(88);
  arr.insert(66);
  arr.insert(33);
  arr.imprimir();
  arr.remove(33);
  arr.imprimir();



  system("pause");
  return 0;
}//and function main
