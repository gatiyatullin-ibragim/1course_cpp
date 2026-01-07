#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() 
{
    int m;
    cin >> m;

    map<string, int> bug_weakness_count;

    for (int i = 0; i < m; i++) 
    {
        string bug_name, weakness;
        cin >> bug_name >> weakness;
        bug_weakness_count[weakness]++;
    }

    int n;
    cin >> n;

    map<string, int> hunter_ability_limit;

    for (int i = 0; i < n; i++) 
    {
        string hunter_name, ability;
        int catch_limit;
        cin >> hunter_name >> ability >> catch_limit;
        hunter_ability_limit[ability] += catch_limit;
    }

    int bugs_left = 0;

    for (map<string, int>::iterator it = bug_weakness_count.begin(); it != bug_weakness_count.end(); ++it) 
    {
        string weakness = it->first;
        int bug_count = it->second;

        int hunter_limit = hunter_ability_limit[weakness];
        if (bug_count > hunter_limit)
            bugs_left += bug_count - hunter_limit;
    }

    cout << "Bugs left: " << bugs_left << endl;

    return 0;
}