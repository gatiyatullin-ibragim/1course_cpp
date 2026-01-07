#include <iostream>
using namespace std;

bool isUsual(int num) {
    if (num <= 0) return false;
    int factors[] = {2, 3, 5};
    for (int factor : factors) {
        while (num % factor == 0) {
            num /= factor;
        }
    }
    return num == 1;
}

int main() {
    int n;
    cin >> n;
    if (isUsual(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
