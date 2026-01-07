#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> v(n);
    map<string, int> first_occurrence;
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (first_occurrence.find(v[i]) == first_occurrence.end()) {
            first_occurrence[v[i]] = i + 1;
        }
    }

    vector<string> sorted_strings = v;
    sort(sorted_strings.begin(), sorted_strings.end());
    sorted_strings.erase(unique(sorted_strings.begin(), sorted_strings.end()), sorted_strings.end());

    for (const auto& str : sorted_strings) {
        cout << str << ' ' << first_occurrence[str] << endl;
    }

    return 0;
}
