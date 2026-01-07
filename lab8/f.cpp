#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;  
    cin >> s;

    stack<char> sequence;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            sequence.push(s[i]);
        } else if (s[i] == ')') {
            if (sequence.empty()) {
                cout << "NO" << endl;
                return 0;
            } else {
                sequence.pop();
            }
        }
    }

    if (sequence.empty()) {
        cout << "YES" << endl;  
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
