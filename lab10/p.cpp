#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    set<int> askhanbee;

    for(int i=0; i<a; ++i){
        int num;
        cin >> num;
        askhanbee.insert(num);
    }
    for(int i=0; i<b; ++i){
        int num2;
        cin >> num2;
        askhanbee.insert(num2);
    }

    for(auto c : askhanbee){
        cout << c << ' ';
    }

return 0;
}