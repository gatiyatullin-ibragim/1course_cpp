#include <iostream>
using namespace std;

int pairs(int a[], int b[], int n){
    int cnt = 0;
    bool used[10000] = {false};

    for(int i=0; i<n; ++i){
        used[b[i]]= true;
    }

    for(int i=0; i<n; ++i){
        if(used[a[i]]){
           cnt++;
           used[a[i]] = false;
        }
    } 

    return cnt;
}

int main(){
int n;

 cin >> n;
 
 int a[n], b[n]; 
 
 for(int i=0; i<n; ++i){
     cin >> a[i];
 }
 
 for(int i=0; i<n; ++i){
     cin >> b[i];
 }
 
 int result = pairs(a, b, n);
 cout << result << endl;

 return 0;
}