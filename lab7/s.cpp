#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, set<int>> list;      
    for (int i = 0; i < n; ++i) {
        string name;
        int date_of_attendance;
        cin >> name >> date_of_attendance;
        
        list[name].insert(date_of_attendance);
    }
    
    map<string, set<int>>::iterator it;
    for (it = list.begin(); it != list.end(); ++it) {
        string name = it->first;
        int unique_days = it->second.size();  \
        
        if (unique_days >= 3) {
            cout << name << " +1" << endl;
        } else {
            cout << name << " NO BONUS" << endl;
        }
    }
    
    return 0;
}
