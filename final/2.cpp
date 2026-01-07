#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int m;
    cin >> m;

    vector<int> v2(m);
    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }

    set<int> s(v.begin(), v.end());
    int cnt = 0;

    for (int i = 0; i < m; ++i) {
        if (s.find(v2[i]) != s.end()) {
            ++cnt;
        }
    }

    cout << cnt << endl;
    return 0;
}
