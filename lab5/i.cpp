#include <iostream>
#include <string>
using namespace std;

int main() {
    string dish;
    
    while (true) {
        getline(cin, dish);

        if (dish.empty()) {
            break; 
        }

        int asciiSum = 0;
        for (int j = 0; j < dish.length(); j++) {
            asciiSum += dish[j];
        }

        if (asciiSum > 300) {
            cout << "It is tasty!" << endl;
        } else {
            cout << "Oh, no!" << endl;
        }
    }

    return 0;
}
