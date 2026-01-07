#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<int,int> mp;

    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        mp[a] ++;
    }
    

    auto it = mp.begin();
    advance(it,1);

    cout << it->second << endl;

    

return 0;
}