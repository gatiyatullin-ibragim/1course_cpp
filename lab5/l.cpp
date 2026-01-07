#include <iostream>
using namespace std;

bool canBePalindrome(string s) {
    int l = 0;
    int r = s.size() - 1;
    int mismatch_count = 0;
    
    while (l < r) {
        if (s[l] != s[r]) {
            mismatch_count++;
        }
        l++;
        r--;
    }
    
    return mismatch_count <= 1;
}

int main() {
    string s;
    cin >> s;

    if (canBePalindrome(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
