#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, string> m;
    for(int i=0; i<n; ++i){
        string assistent;
        int numofstudents;
        cin >> assistent >> numofstudents;
        for(int j=0; j<numofstudents; ++j){
            string student;
            cin >> student;
            m[student] = assistent;
        }
    }

    int n2;
    cin >> n2;

    for(int i=0; i<n2; ++i){
        string name;
        cin >> name;
        if(m.find(name) == m.end()) cout << "F"<< endl;
        else cout << m[name] << endl;
    }

return 0;
}

///