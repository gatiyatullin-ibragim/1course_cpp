#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> registered; 
    vector<string> results;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;  

        if (registered.find(s) != registered.end()) { 
            results.push_back("user already exists");
        } else {
            registered.insert(s);
            results.push_back("new user added");
        }
    }

    for (const string& res : results) {
        cout << res << endl;
    }

    return 0;
}
