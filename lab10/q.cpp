#include <iostream>
#include <stack>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s) {
        if (st.empty() || st.top() != c) {
            st.push(c);  
        } else {
            st.pop();  
        }
    }

    if (st.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
