#include<bits/stdc++.h>
using namespace std;


bool compare(pair<string, int> &a, pair<string,int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    string text;
    getline(cin, text);

    for(int i=0; i<text.size(); ++i){
        text[i] = tolower(text[i]);
    }

    stringstream ss(text);
    map<string, int> m;

    string word;

    while(ss >> word){
        m[word]++;
    }

    vector<pair<string, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<text.size(); ++i){
        cout << v.at(i).first << ":" << v.at(i).second << endl;
    }
}