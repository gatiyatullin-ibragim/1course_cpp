#include <iostream>
using namespace std;

string strBool(string str){
    bool zero = true;
    bool one = true;

    for(char ch : str){
        if(ch != '1') one = false;
        if(ch != '0') zero = false; 
    }

    if(one) return "true";
    if(zero) return "false";
    return str;
}

int main(){
    string str;
    cin >> str;
    cout << strBool(str);
return 0;
}