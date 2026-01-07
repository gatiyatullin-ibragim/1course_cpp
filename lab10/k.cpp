#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    map<int, bool> m;

    for (int num : arr) {
        m[num] = true;
    }

    int max = m.rbegin()->first; 
 
    cout << max << endl;

    return 0;
}
