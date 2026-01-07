#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n; 
    cin >> n;

    unordered_map<int, int> banknotes; 

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        banknotes[value]++;  
    }

    int q; 
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int query;
        cin >> query;

        cout << banknotes[query] << endl;
    }

    return 0;
}
