#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin >> v.at(i);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; ++i){
       pair<int,int> p = make_pair(i+1, v.at(i));
        cout << p.first << ' ' << p.second << endl;
    }

return 0;
}