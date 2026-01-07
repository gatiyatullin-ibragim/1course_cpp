#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }

    bool possible=true;

    for(int i=0; i<n; ++i){
        swap(arr[i], arr[i+1]);
        if(arr[i]==arr[i+1]){
            possible = false;
        }else{
            possible = true;
        }
        if(possible)cout << "Possible";
    else cout<< "Impossible";
    break;
    }
    

return 0;    
}