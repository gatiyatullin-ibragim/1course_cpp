#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int value;

    while (true) {
        cin >> value;
        if (value == 0) break;
        a.push_back(value);
    }

    int n = a.size();
    for (int i = 0; i < n / 2; ++i) {
        
        cout << a[i] + a[n - i - 1] << ' ';
    }

    if (n % 2 != 0) {
        cout << a[n / 2] << ' ';
    }

    return 0;
}
