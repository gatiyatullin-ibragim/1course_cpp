#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1){
    cout << "NO";
    return 0;
    }
    bool prime = true;

    for(int i=2; i<n; ++i){
        if(n%i==0){
            prime = false;
            break;
        }
        else{
            prime = true;
        }
    }
    if(prime){
        cout << "YES";
    }else{
        cout << "NO";
    }
return 0;
}