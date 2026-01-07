#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> submissions;
    vector<string> names;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        names.push_back(name);
        submissions[name]++; 
    }

    reverse(names.begin(), names.end());

    bool cheaterFound = false;
    for (const string& name : names) {
        if (submissions[name] > 1) {
            cout << name << endl;
            cheaterFound = true;
            submissions[name] = -1;
        }
    }

    if (!cheaterFound) {
        cout << "Understandable, have a great day" << endl;
    }

    return 0;
}
