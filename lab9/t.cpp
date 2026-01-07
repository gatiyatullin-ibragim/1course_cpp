#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a;
    for(int i=0; i<n; ++i){
        int num;
        cin >> num;
        a.push_back(num);
    }

    int m;
    cin >> m;
    vector <int> b;
    for(int i=0; i<m; ++i){
        int num2;
        cin >> num2;
        b.push_back(num2);
    }

    vector<int> result(a.size() + b.size());

    merge(a.begin(), a.end(), b.begin(), b.end(), result.begin());

    for(int num : result){
        cout << num << ' ';
    }

return 0;

}