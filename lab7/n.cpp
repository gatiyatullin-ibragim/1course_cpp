#include<iostream>
#include<set>
#include<vector>
using namespace std;

bool uniquearray(const vector<int>& arr){
    set<int> uniquelements;
    for(int num : arr){
        if(uniquelements.count(num) > 0){
            return false;
        }
        uniquelements.insert(num);
    }
return true;
}

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    if(uniquearray(a)){
        cout << "YES";
    }else{
        cout << "NO";
    }
return 0;
}