#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int l, r;
    cin >> s >> l >> r;

    string result = s.substr(l, r-l+1);

    cout << result << endl;
return 0;
}