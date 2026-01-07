#include <iostream>
#include <vector>
using namespace std;

int findNthNumber(const vector<int>& arr, int X) {
    bool present[1001] = {false};
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 1000) {
            present[arr[i]] = true;
        }
    }
    
    
    int missingCount = 0;
    for (int i = 1; i <= 1000; i++) {
        if (!present[i]) {
            missingCount++;
            if (missingCount == X) {
                return i;
            }
        }
    }
    
    return -1;
}

int main() {
    vector<int> arr;
    int num;
    
    
    while (cin >> num) {
        arr.push_back(num);
    }
    
    
    int X = arr.back();
    arr.pop_back();
    
    cout << findNthNumber(arr, X) << endl;
    return 0;
}