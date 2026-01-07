#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; ++i){
        int first=arr[i][0];
        int cnt=0;

        for(int j=1; j<n; ++j){
            if(arr[i][j] > first){
                ++cnt;
            }
    }

    cout << cnt << endl;

    }


return 0;
}