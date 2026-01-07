#include<iostream>
using namespace std;

int pairs(int a[], int b[], int n){
    int cnt=0;
    bool used_a[100001] = {};
    bool used_b[100001] = {};

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(a[i] == b[j] && !used_a[i] && !used_b[j]){
                used_a[a[i]]++;
                used_a[i] = true;
                used_b[j] = true;
                break;
            }
        }
    }
    return pairs;
}

int main(){
    long long n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    int b[n];
    for(int i=0; i<n; ++i){
        cin >> b[i];
    }

    int result = pairs(a[], b[], n);
    cout << result << endl;

    return 0;

}