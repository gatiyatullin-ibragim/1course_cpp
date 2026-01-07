#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    set<string> seen;  
    set<string> duplicates;  

    for (auto it = v.begin(); it != v.end(); ++it) {
        if (seen.find(*it) != seen.end()) {
            duplicates.insert(*it);
        } else {
            seen.insert(*it); 
        }
    }

    for (const string& s : duplicates) {
        cout << s << ' ';
    }

    return 0;
}
