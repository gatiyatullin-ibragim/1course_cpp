#include<iostream>
using namespace std;
void negative(int a){
    int b = 0;
    if(a>0){
        cout << a;
    }else if(a<0){
        b = b-a;
        cout << b;
    }
}

int main(){
    int a;
    cin >> a;

    negative(a);

return 0;
}