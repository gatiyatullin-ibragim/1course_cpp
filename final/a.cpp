#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l;
    cin >> n >> k >> l;

    int arr[n];

    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int i=1; i<n; ++i){
        swap(arr[k], arr[l]);
    }

    for(int i=0; i<n; ++i){
        cout << arr[i] << ' ';
    }


    return 0;
}