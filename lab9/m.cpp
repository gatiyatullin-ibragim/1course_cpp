#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int total = n*(n+1)/2;

    vector<int> v(total);

    int pos=0;

    for(int i=1; i<=n; ++i){
        fill(v.begin() + pos, v.begin() + pos + i, i);
        pos += i;
    }

    for(int i=0; i<v.size(); ++i){
        cout << v.at(i) << " ";
    }
    return 0;
}