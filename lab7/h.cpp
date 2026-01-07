#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    vector<int> arr;

    for(int i=0; i<n; ++i){
        cin >> x;
        arr.push_back(x);
    }
    int sum = 0;
    for(int i=0; i<arr.size(); ++i){
        sum ^= arr.at(i);
    }
    cout <<sum;
return 0;
}