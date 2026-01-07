#include <iostream>
using namespace std;

void valid(int a) {
    bool allEven = true;
    
    while (a > 0) {
        int digit = a % 10;
        if (digit % 2 != 0) {
            allEven = false;
            break;
        }
        a /= 10;
    }

    if (allEven) {
        cout << "Valid";
    } else {
        cout << "Not valid";
    }
}

int main() {
    int a;
    cin >> a;

    valid(a);
    return 0;
}
