#include <iostream>
#include <set>
#include <string>

using namespace std;
int main () {

    int n;
    cin >> n;
    cin.ignore();

    set<char> v;

    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) 
    {
        v.insert(s[i]);
    }

    for (int i = 1; i < n; i++) {

        string str;
        getline(cin, str);

        set<char> CurrentChras(str.begin(), str.end());

        for (set<char>::iterator it = v.begin(); it != v.end();) {

            if (CurrentChras.find(*it) == CurrentChras.end()) 
            {
                it = v.erase(it);
            } else {
                it++;
            }

        }

    }


    if (v.empty()) 
    {
        cout << "NO COMMON CHARACTERS";
    } 
    else 
    {
        for (set<char>::iterator it = v.begin(); it != v.end(); it++) {
            cout << *it << ' ';        
        }
    }


    return 0;
}