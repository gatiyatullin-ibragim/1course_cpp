#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, pernum, res = 0;
    vector<int> v;

    cin >> n >> pernum;
    for (int i = 1; i <= n; ++i) v.emplace_back(i);

    do {
        int ctr = 0;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] == i+1) ++ctr;
        }

        if (ctr == pernum) ++res;
    }
    while (next_permutation(v.begin(), v.end()));

    cout << res;

    return 0;
}