#include <iostream>
using namespace std;

void store(int n, int b[], int a){
    bool found = false;
    for(int i=0; i<n; ++i){
        if(b[i] == a){
            found =true;
            break;
        }    
    }
    if(found){
        cout << "Yes";
    }else{
        cout << "No";
    }
}

int main(){
    int n;
    cin >> n;
    int b[n];
    for(int i=0; i<n; ++i){
        cin >> b[i];
    }

    int a;
    cin >> a;
    store(n, b, a);

    return 0;
}