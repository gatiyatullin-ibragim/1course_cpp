#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    char bestChar = s[0];
    int bestLength = 1;

    char currentChar = s[0];
    int currentLength = 1;

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == currentChar) {
            ++currentLength;
        } else {
            if (currentLength > bestLength) {
                bestLength = currentLength;
                bestChar = currentChar;
            }
            currentChar = s[i];
            currentLength = 1;
        }
    }

    
    if (currentLength > bestLength) {
        bestLength = currentLength;
        bestChar = currentChar;
    }

    cout << bestChar << " " << bestLength << endl;

    return 0;
}
