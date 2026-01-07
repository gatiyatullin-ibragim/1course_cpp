#include<iostream>
#include<string>
using namespace std;

void removeVowels(string a) {
    string result;
    char vowels[6] = {'a', 'o', 'e','u', 'i'};

    for (int i = 0; i < a.length(); ++i) {
        bool isVowel = false;

        for (int j = 0; j < 6; ++j) {
            if (tolower(a[i]) == vowels[j]) {
                isVowel = true;
                break;
            }
        }

        if (!isVowel || isdigit(a[i])) {
            result += a[i];
        }
    }

    cout << result;
}

int main() {
    string a;
    getline(cin, a);

    removeVowels(a);
    return 0;
}
