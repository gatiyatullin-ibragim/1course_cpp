#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i=0; i<n; ++i){
        int k;
        cin >> k;
        v.push_back(k);
    }
    int cnt=0;
    for(int i=0; i<n; ++i){
        if(v.at(i) == k){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}