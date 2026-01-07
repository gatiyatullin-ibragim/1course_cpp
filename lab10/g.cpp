#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;


    vector<string> v;


    for(int i=0; i<n; ++i){
        string values;
        cin >> values;
        v.push_back(values);
    }

    set<string> s;
    for(string d : v){
        if(s.find(d) == s.end()){
            s.insert(d);
        }
    }

    for(string f : s){
        cout << f << endl;
    }


return 0;

}