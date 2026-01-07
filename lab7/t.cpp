#include <iostream>
#include <set>
using namespace std;


bool hasUniqueDigits(int number) {
    set<char> digits; 
    string numStr = to_string(number); 

    for (char c : numStr) {
        if (digits.find(c) != digits.end()) {
            return false;
        }
        digits.insert(c);
    }
    return true; 
}

int main() {
    int l, r;
    cin >> l >> r;

    
    for (int i = l; i <= r; i++) {
        if (hasUniqueDigits(i)) {
            cout << i << endl; 
            return 0; 
        }
    }

    
    cout << "Understandable, have a great day" << endl;
    return 0;
}