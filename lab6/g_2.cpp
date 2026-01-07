#include <iostream>
#include<sstream>
using namespace std;

void removeVowels(string s){
    stringstream ss(s);
    string word;
    while(ss >> word){
        for(int i=0; i<word.size(); i++){
            if(word[i] == 'a' || word[i] == 'o' || word[i] =='i' || word[i] == 'u' || word[i] == 'e' || word[i]== 'y') continue;
            else cout << word[i];
        }
        cout << " ";
    }
}

int main(){
    string sentence;
    getline(cin, sentence);

    removeVowels(sentence);

return 0;
}