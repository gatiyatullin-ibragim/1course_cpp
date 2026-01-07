#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    
    string result;

    
    for (char c : s) {
        if (isalpha(c)) {
            result += c;
        }
    }
    cout << result << endl;

    return 0;
}
