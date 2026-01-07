#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    if (is_sorted(sequence.begin(), sequence.end(), greater<int>())) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << endl;
        return 0;
    }

    sort(sequence.begin(), sequence.end());
    sequence.erase(unique(sequence.begin(), sequence.end()), sequence.end());

    set<vector<int>> unique_permutations;

    do {
        unique_permutations.insert(sequence);
    } while (next_permutation(sequence.begin(), sequence.end()));

    for (const auto& perm : unique_permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
