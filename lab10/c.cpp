#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, string> v;

    for(int i=0; i<n; ++i){
        string word, translate;
        cin >> word >> translate;
        v[word] = translate;
    }

    string wordToDelete;
    cin >> wordToDelete;

    v.erase(wordToDelete);

    for(map<string, string>::iterator it = v.begin(); it!=v.end(); ++it){
        cout << it->first <<" "<<it->second << endl; 
    }

return 0;

}