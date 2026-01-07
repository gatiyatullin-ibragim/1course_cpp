#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, int> pass; 
    for(int i=0; i<n; ++i){
        string nickname, password;
        cin >> nickname >> password;
        pass[nickname]++;  
    }

    vector<string> logins;


    for(const auto& entry : pass){
        logins.push_back(entry.first);
    }

    sort(logins.begin(), logins.end());

    for(const string& login : logins){
        if(pass[login] > 3) {
            cout << login << " is hacked" << endl; 
        } else {
            cout << login << " is valid" << endl;  
        }
    }

    return 0;
}
