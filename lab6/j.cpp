#include <iostream>
using namespace std;

void max(int a[4]){
    int max = a[0];
    for(int i=0; i<4; ++i){
        if(a[i] > max){
            max = a[i];
        }
    }

    cout << max;
}
int main(){
    int a[4];
    for(int i=0; i<4; ++i){
        cin >> a[i];
    }

    max(a);
return 0;
}