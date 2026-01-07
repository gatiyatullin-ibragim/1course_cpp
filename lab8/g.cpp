#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;

    stack<char> stk;

    for(int i=0; i<s.size(); ++i){
        if(!stk.empty() && stk.top() == '1' && s[i] == '1'){
            stk.pop();
        }
        else{
            stk.push(s[i]);
        }
    }

    string result;

    while(!stk.empty()){
        result = stk.top() + result;
        
        stk.pop();
    }
    cout << result;

return 0;
}