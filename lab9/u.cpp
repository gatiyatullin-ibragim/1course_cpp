#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool compareVectors(const vector<int>& vec1, const vector<int>& vec2) {
    return vec1 == vec2;
}

int main() {
    int n;
    cin >> n; 

    vector<int> vec;
    set<int> s;

    for (int i = 0; i < n; ++i) {
        int elem;
        cin >> elem;
        vec.push_back(elem);
        s.insert(elem);
    }

    vector<int> sorted_vec = vec;
    sort(sorted_vec.begin(), sorted_vec.end());

    if (compareVectors(sorted_vec, vector<int>(s.begin(), s.end()))) {
        cout << "YES" << endl;
        return 0;
    }

    bool found_swap = false;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(vec[i], vec[j]); 
            if (compareVectors(vec, vector<int>(s.begin(), s.end()))) {
                found_swap = true;
                break;
            }
            swap(vec[i], vec[j]); 
        }
        if (found_swap) break;
    }

    
    if (found_swap) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
