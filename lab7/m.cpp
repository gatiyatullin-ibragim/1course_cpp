#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> names;

    for(int i=0; i<n; ++i){
        string name;
        cin >> name;
        names.insert(name);
    }
    cout << names.size();
}