#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> 
using namespace std;


bool comparator(const vector<int>& a, const vector<int>& b) {
    int sumA = accumulate(a.begin(), a.end(), 0);
    int sumB = accumulate(b.begin(), b.end(), 0); 

    if (sumA != sumB) return sumA < sumB;
    if (a.size() != b.size()) return a.size() < b.size(); 
    return a < b; 
}

int main() {
    int cnt;
    cin >> cnt;

    vector<vector<int>> v(cnt);

    for (int i = 0; i < cnt; ++i) {
        int n;
        cin >> n; 
        v[i].resize(n); 
        for (int j = 0; j < n; ++j) {
            cin >> v[i][j]; 
        }
    }

    sort(v.begin(), v.end(), comparator);

    for (const auto& vec : v) {
        for (int x : vec) {
            cout << x << " ";
        }
        cout << endl; 
    }

    return 0;
}
