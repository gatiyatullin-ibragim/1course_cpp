#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a;
    set<int> d;
    for(int i=0; i<n; ++i){
        int b;
        cin >> b;
        a.push_back(b);
    }
    for(int i=1; i<n; ++i){
        d.insert(a[i]+a[i-1]);
    }
    cout << d.size();
return 0;
}