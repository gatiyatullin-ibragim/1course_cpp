#include<iostream>
#include<string>
#include<set>
#include<stack>
using namespace std;

int main(){
    string s;
    stack<char> polindrome;
    cin >> s;

    for(int i=0; i<s.size(); ++i){
        if(polindrome.empty()){
        polindrome.push(s[i]);
        }
        else if(polindrome.top() != s[i]){
            polindrome.push(s[i]);
        }
        else{
            polindrome.pop();
        }
    }

    if(polindrome.empty()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

return 0;
}