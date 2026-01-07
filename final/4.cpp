#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;

    map<int,int> cnt;


    while(cin >> a){
        if(a==0){
            break;
        }
        cnt[a]++;
    }

    for(map<int,int>::iterator it=cnt.begin(); it!=cnt.end(); ++it){
        cout << it->second << ' ';
    }


    return 0;
}