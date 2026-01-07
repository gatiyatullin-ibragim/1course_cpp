#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;

int  main(){
    int n;
    cin >> n;
    map<string, int> doramas;
    for(int i=0; i<n; ++i){
        string name;
        int numofdoramas;
        cin >> name >> numofdoramas;

        doramas[name] += numofdoramas;
        
    }
    map<string, int>::iterator it;
    for(it = doramas.begin(); it != doramas.end(); ++it){
        cout << it->first << ' ' << it->second << endl;
    }

return 0;
}