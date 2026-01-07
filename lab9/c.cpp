#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int currentIndex = 0;


long long calculatePower() {
    int value = currentIndex; 
    currentIndex++; 
    return powl(value, value);
}

int main() {
    int N;
    cin >> N;

    vector<long long> sequence(N + 1);
    
    generate(sequence.begin(), sequence.end(), calculatePower);

    for (size_t i = 0; i < sequence.size(); ++i) {
        cout << sequence.at(i) << " ";
    }

    cout << endl;
    return 0;
}