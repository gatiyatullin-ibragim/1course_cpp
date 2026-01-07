#include<bits/stdc++.h>
using namespace std;

int main(){
    string num;
    cin >> num;

    unordered_set<int> squares = {16, 25, 36, 49, 64, 81};

    stack<char> s;

    for(char c : num){
        if(!s.empty()){
            int prev = s.top() - '0';
            int current = c - '0';
            int twodigit = prev*10 + current;

            if(squares.count(twodigit)){
                s.pop();
                continue;
            }
        }
        s.push(c);
    }

    if(s.empty()){
        cout << "Stack is empty";
    }else{
        string result = "";
        while(!s.empty()){
            result += s.top();
            s.pop();
        }
        cout << result << endl;
    }

return 0;


}