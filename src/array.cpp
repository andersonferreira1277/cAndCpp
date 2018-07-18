#include <iostream>
using namespace std;


class Array{
private:
    int size;
    int *data;

public:
    Array(int max){
        size = 0;
        data = new int[max];
    };

    ~Array(){
        delete []data;
    };

    void insert(int value){
        data[size] = value;
        size++;
    };

    void display(){
        for (int i = 0; i< size; i++){
            cout << data[i] << endl;

        }
    };


    bool find (int searchKey){
        int j;
        for (j=size; j<size; j++){
            if (data[j] == searchKey){
                break;
            }

        }

        if (j == size){
            return false;
        } else {
            return true;
        }
    };

    bool remove(int value){

        int j;
        for (j=size; j<size; j++){
            if (data[j] == value){
                break;
            }

        }

        if (j == size){
            return false;
        } else {
            for (int k = j; k < size; k++){
                data[k] = data[k+1];
            }
            size--;
        }
    }

    int binaryFind(int searchKey){

        int lowerBound = 0;
        int upperBound = size -1;
        int curIn;

        while (true){
            cout << lowerBound << endl;
            cout << upperBound << endl;
            curIn = (lowerBound + upperBound) / 2;
            if (data[curIn] == searchKey){
                return curIn;
            }
            else if (lowerBound > upperBound){
                return false;
            } else{
                if (data[curIn] < searchKey){
                    lowerBound = curIn + 1;
                } else {
                    upperBound = curIn - 1;
                }
            }
        }
    }

};

int main() {

    int maxSize = 10;
    Array ar = Array(maxSize);
    ar.display();

    ar.insert(10);
    ar.insert(45);
    ar.insert(85);
    ar.insert(9);

    ar.display();

    return 0;
}
