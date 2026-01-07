#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string firstString;
    cin >> firstString;

    size_t pos = firstString.find('@');
    if (pos != string::npos) {
        firstString = firstString.substr(0, pos);
    }

    cout << firstString << endl;

    return 0;
}
