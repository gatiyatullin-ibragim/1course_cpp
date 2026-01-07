#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

        set<int> uniqueNumbers(numbers.begin(), numbers.end());
    vector<int> uniqueVec(uniqueNumbers.begin(), uniqueNumbers.end());

    sort(uniqueVec.begin(), uniqueVec.end());

    do {
        for (int num : uniqueVec) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(uniqueVec.begin(), uniqueVec.end()));

    return 0;
}
