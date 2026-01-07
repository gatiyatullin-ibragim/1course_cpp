#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;


bool isPollindrome(const string& s){
    unordered_map<char,int> frequency;

    for(char c : s){
        frequency[c]++;
    }

    int cnt=0;
    for(auto& pair : frequency){
        if(pair.second % 2 != 0){
            cnt ++;
        }
    }

    return cnt <= 1;
}

int main(){
    string s;
    cin >> s;
    if(isPollindrome(s)){
        cout << "ZA WARUDO TOKI WO TOMARE";
    }else{
        cout << "JOJO";
    }
return 0;
}