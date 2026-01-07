#include <iostream>
#include <string>

using namespace std;

string shiftCharacters(const string& str) {
    string shiftedString;
    
    for (char c : str) {
        if (isalpha(c)) {
            if (c == 'z') {
                shiftedString += 'a';
            } else if (c == 'Z') {
                shiftedString += 'A';
            } else {
                shiftedString += c + 1;  
            }
        } else {
            shiftedString += c;
        }
    }
    
    return shiftedString;
}

int main() {
    string inputString;
    cin >> inputString;
    string outputString = shiftCharacters(inputString);
    
    cout << outputString << endl;
    
    return 0;
}
