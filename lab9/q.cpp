#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    }

    auto new_end = unique(v.begin(), v.end());

    v.erase(new_end, v.end());


    for(int val : v){
        cout << val << ' ';
    }

return 0;
}