#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> v;

    for(int i=0; i<n; ++i){
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        v.push_back(make_pair(sum, i+1));
    }
    sort(v.begin(), v.end());

    for(vector<pair<int,int>> :: iterator it = v.begin(); it!=v.end(); it++){
        cout << it->second << " ";
    }
return 0;
}