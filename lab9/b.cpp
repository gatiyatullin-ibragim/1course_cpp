#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
  
    vector<string> names;
    vector<int> marks;

    for (int i = 0; i < N; ++i) 
    {
        int b;
        string a;
        cin >> a >> b;
        names.push_back(a);
        marks.push_back(b);

    }

    sort(names.begin(), names.end());

    sort(marks.begin(), marks.end());

    for (int i = 0; i < N; ++i) {
        cout << names.at(i) << " " << marks.at(i) << endl;
    }

    return 0;
}
