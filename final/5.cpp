#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    bool isboring = true;

    for(char c : s){
        if(c != 'a' || c != 'b'){
            isboring = false;
            break;
        }
    }

    if(isboring){
        cout << "YES";
    }else{
        cout << "NO";
    }    

    return 0;
}