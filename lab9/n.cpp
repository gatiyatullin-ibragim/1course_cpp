#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> vec1(n), vec2(m);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> vec2[i];
    }

    vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());

    vec2.erase(unique(vec2.begin(), vec2.end()), vec2.end());

    vector<int> merged;
    int i = 0, j = 0;

    while (i < vec1.size() || j < vec2.size()) {
        if (i < vec1.size()) {
            merged.push_back(vec1[i++]);
        }
        if (j < vec2.size()) {
            merged.push_back(vec2[j++]);
        }
    }

    merged.erase(unique(merged.begin(), merged.end()), merged.end());

    for (int num : merged) {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}
