#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        s.insert(value); 
    }

    int index = 1;
    for (const int &val : s) {
        pair<int, int> p = make_pair(index++, val);  
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}
