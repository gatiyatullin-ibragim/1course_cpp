#include <iostream>
#include <string>
using namespace std;

int main() {
    string letter, word;
    cin >> letter >> word;

    char charToRemove = letter[0];

    for (int i = 0; i < word.length(); ++i) {
        if (word[i] != charToRemove) {
            cout << word[i];
        }
    }
    cout << endl;

    return 0;
}
