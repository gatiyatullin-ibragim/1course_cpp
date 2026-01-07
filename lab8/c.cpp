#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int cnt;
    cin >> cnt;

    map<int, int> m;

    for(int i=0; i<cnt; ++i){
        int key;
        cin >> key;
        m[key]++;
    }

    int count=0;

    for(map<int, int> :: iterator it = m.begin(); it != m.end(); ++it){
        if(it->second >= 2){
            count++;
    }
    }

    cout << count;

    return 0;

}