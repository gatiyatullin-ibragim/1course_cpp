#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    map<int, int> freq;
    for (int num : v) {
        freq[num]++;
    }

    int most_frequent = INT_MAX;
    int max_frequency = 0;
    for (const auto& pair : freq) {
        int value = pair.first;
        int count = pair.second;

        if (count > max_frequency || (count == max_frequency && value < most_frequent)) {
            most_frequent = value;
            max_frequency = count;
        }
    }

    cout << most_frequent << endl;
    return 0;
}
