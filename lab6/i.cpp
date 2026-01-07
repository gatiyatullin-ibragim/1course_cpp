#include<iostream>
#include<string>
using namespace std;

void capitaleven(string s){
    for(int i=0; i<s.length(); ++i){
        if(i%2==0){
            s[i] = toupper(s[i]);
        }if(i%2!=0){
            s[i] = s[i];
        }
    }
    cout << s;
}

int main(){
    string s;   
    cin >> s;
    capitaleven(s);
return 0;
}