#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, string> documents;

    for(int i=0; i<n; ++i){
        string command, key;
        cin >> command >> key;
        if(command == "set"){
            string value;
            cin >> value;
            documents[key] = value;
        }

    if(command == "get"){
        if(documents.find(key) == documents.end()){
            cout << "KE: no key " << key << " found in the document";
            cout << endl;
        }
        else{
            cout << documents[key]<< endl;
        }
    }
    }
}