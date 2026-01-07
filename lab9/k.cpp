#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> v(n1);
    for(int i=0; i<n1; ++i){
        cin >> v.at(i);
    }

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + (n1-n2));
    reverse(v.begin()+ (n1-n2), v.end());
    reverse(v.begin(), v.end());

    for(int i=0; i<n1; ++i){
        cout << v.at(i)<< " ";
    }
return 0;
}