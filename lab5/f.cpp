#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int digitCount[10] = {0};

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            digitCount[s[i] - '0']++;
        }
    }

    int firstCount = -1;
    bool equal = true;

    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            if (firstCount == -1) {
                firstCount = digitCount[i];
            } else if (digitCount[i] != firstCount) {
                equal = false;
                break;
            }
        }
    }

    if (equal) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
