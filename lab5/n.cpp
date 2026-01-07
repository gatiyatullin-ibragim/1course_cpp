#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    string reversed_s = s;
    
    reverse(reversed_s.begin(), reversed_s.end());

    if(reversed_s == s){
        cout << "YES";
    }else{
        cout << "NO"; 
    }
return 0;
}
