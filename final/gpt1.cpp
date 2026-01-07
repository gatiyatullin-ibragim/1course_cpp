#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    map<int, int> mp;

    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        mp[a]++;
    }

    vector<pair<int,int>> vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(), [] (const pair<int,int> &a, const pair<int,int> &b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    });

    for(const auto &entry : vec){
        cout << entry.first << " : " << entry.second << endl;
    }


    return 0;
}