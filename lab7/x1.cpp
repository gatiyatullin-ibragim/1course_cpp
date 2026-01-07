#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >>n;

    set<string> acc1;

    for(int i=0; i<n; i++){
        string name;
        cin >> name;
        acc1.insert(name);
    }

    int n2;
    cin >>n2;

    set<string> acc2;

    for(int i=0; i<n2; i++){
        string name2;
        cin >> name2;
        acc2.insert(name2);
    }


    vector<string> subs;

    for(set<string>::iterator it = acc1.begin(); it!=acc1.end() ; it++){
        if(acc2.find(*it) == acc2.end()){
            subs.push_back(*it);
        }
    }
    for(set<string>::iterator it = acc2.begin(); it!=acc2.end() ; it++){
        if(acc1.find(*it) == acc1.end()){
            subs.push_back(*it);
        }
    }
    
    sort(subs.begin(), subs.end());

    for(vector<string>::iterator it = subs.begin(); it!= subs.end(); it++){
        cout << *it << endl;
    }


    return 0;
}