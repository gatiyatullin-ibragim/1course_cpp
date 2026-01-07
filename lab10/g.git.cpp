#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<string> submissions(n);
    for (int i = 0; i < n; ++i) {
        cin >> submissions[i];
    }

    map<string, int> count_map;  
    set<string> cheaters;        
    vector<string> cheater_list; 

    for (int i = 0; i < n; ++i) {
        string name = submissions[i];
        count_map[name]++;
        if (count_map[name] == 2) { 
            if (cheaters.find(name) == cheaters.end()) {
                cheaters.insert(name);
                cheater_list.push_back(name);
            }
        }
    }

    if (cheaters.empty()) {
        cout << "Understandable, have a great day" << endl;
    } else {
        for (int i = 0; i < cheater_list.size(); ++i) {
            cout << cheater_list[i] << endl;
        }
    }

    return 0;
}