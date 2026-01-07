#include <iostream>

using namespace std;

void substract(int a[], int b[], int n){
    for(int i = 0; i < n; ++i){
        int t = b[i] - a[i];
        if(t<0){
            cout << a[i]-b[i] << ' ';
        }else{
            cout << t << ' ';
        }
    }
    cout << endl;
} 

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int b[n];
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    substract(a,b,n);
    
    return 0;
}
