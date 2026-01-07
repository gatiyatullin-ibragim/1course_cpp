#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> v;
    int n;


    while (cin >> n) {
        v.push_back(n);
    }


    set<int> unique_elements(v.begin(), v.end());

    cout << unique_elements.size() << endl;

    return 0;
}
