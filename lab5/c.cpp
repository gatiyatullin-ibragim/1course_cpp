#include<iostream>
#include<string>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    string repeat = "";
    while(repeat.length() < t.length()){
        repeat += s;
    }
    if(repeat = t){
        cout << "YES";
    }else{
        cout << "NO";
    }
return 0;
}