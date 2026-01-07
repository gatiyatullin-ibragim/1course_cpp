#include <iostream>
using namespace std;

int main(){
    int a=5, b=5;

    int **arr = new int*[a];

    for(int i=0; i<a; ++i){
        arr[i] = new int[b];
    }
    
    delete[] arr;
}

