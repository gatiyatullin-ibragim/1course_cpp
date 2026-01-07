#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    unordered_map<string,int> da;

    stringstream ss(s);
    string word;

    while(ss >> word){
        da[word] ++;
    }

    


    for(auto it = da.begin(); it!=da.end(); ++it){
        cout << it->first <<' '<<':' << ' ' << it->second << endl;
    }


    return 0;
}