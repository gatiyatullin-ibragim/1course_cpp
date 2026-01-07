#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int man(){
    int n;
    cin >> n;
    vector <int>arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    int lost = 0;
    sort(arr[n], i+1);
    for(int i=0; i<n; ++i){
        if(arr[i+1]= arr[i+1] + arr[i+2]){
            lost = arr  [i+2]- arr[i+1];
        }
    } 
    cout << lost;

return 0;
}