#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string canBeSortedWithOneSwap(const vector<int>& arr) {
    vector<int> sorted_arr = arr;  
    sort(sorted_arr.begin(), sorted_arr.end());

    int mismatch_count = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != sorted_arr[i]) {
            mismatch_count++;
        }
    }
    return mismatch_count <= 2 ? "YES" : "NO";
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << canBeSortedWithOneSwap(arr) << endl;

    return 0;
}
