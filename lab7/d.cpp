#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a;
    int value;

    for(int i=0; i<n; ++i){
        cin >> value;
        a.push_back(value);
    }
    int sum = 0;
    int avg = 0;
    for(int i=0; i<a.size(); ++i){
        sum += a[i];
        avg = sum/n;
    }
    cout << abs(avg - k);

return 0;
}