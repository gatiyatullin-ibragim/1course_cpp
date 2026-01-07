#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    if (is_sorted(sequence.rbegin(), sequence.rend())) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << endl;
        return 0;
    }

    if (adjacent_find(sequence.begin(), sequence.end(), not_equal_to<int>()) == sequence.end()) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << endl;
        return 0;
    }

    set<vector<int>> uniquePermutations;

    sort(sequence.begin(), sequence.end());

    do {
        uniquePermutations.insert(sequence);
    } while (next_permutation(sequence.begin(), sequence.end()));

    for (const auto& perm : uniquePermutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
