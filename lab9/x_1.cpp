#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    string ans = "";

    do{
        for(int i=0; i<s.size(); ++i){
            ans += s[i];
        }
    }while(prev_permutation(s.begin(), s.end()));

    cout << ans;
return 0;

}