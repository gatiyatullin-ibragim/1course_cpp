#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<cctype>
#include<iterator>
using namespace std;

bool isstrong(const string& password){
    bool is_upper = false;
    bool is_lower = false;
    bool has_digit = false;


    for(char c : password){
        if(isupper(c)) is_upper = true;
        else if(islower(c)) is_lower = true;
        else if(isdigit(c)) has_digit = true;
    }
    if(is_upper && is_lower && has_digit) return true;
    
return false; 
}

int main(){
    int n;
    cin >> n;
    string password;
    set<string> unique_pasw;
    
    vector<string> strong_passw;
    
    for(int i=0; i<n; ++i){
        cin >> password;
        if(isstrong(password) && unique_pasw.find(password)== unique_pasw.end()){
            unique_pasw.insert(password);
            strong_passw.push_back(password);
        }
    }
    cout << strong_passw.size() << endl;

    
    set<string>::iterator it;
    for(it = unique_pasw.begin(); it != unique_pasw.end();++it){ 
            cout<< *it <<endl;
    }
return 0;
}