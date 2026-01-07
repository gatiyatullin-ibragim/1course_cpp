#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    map<string, int> wordCount;
    stringstream ss(text);
    string word;

    while (ss >> word) {
        wordCount[word]++;
    }

    vector<pair<string, int>> words(wordCount.begin(), wordCount.end());

    sort(words.begin(), words.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second != b.second)
            return a.second > b.second;
        return a.first < b.first; 
    });

    for (const auto& pair : words) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}
