#include<iostream>
#include<vector>
#include<set>
#include<cctype>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> pas;
    bool isstrong = false;
    for(int i=0; i<n; ++i){
        string a;
        cin >> a;
        pas.push_back(a);
    }
    set<string> strongpassword;
        bool lower = false;
        bool upper = false;
        bool digit = false;

    for(string password : pas){
        

        for(char c : password){
            if(islower(c)) lower = true;
            if(isupper(c)) upper = true;
            if(isdigit(c)) digit = true;
        }
        if(lower == true || upper == true || digit == true) strongpassword.insert(password);
    }
    
    for(const string& password : strongpassword){
        cout << password<< endl;
    }
    return 0;

}