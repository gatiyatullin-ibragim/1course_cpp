#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin >>n;
    set<int> arr;
    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        if(arr.find(x) == arr.end()){
            cout << "YES" << endl;
            arr.insert(x);
        }else{
            cout << "NO" << endl;
        }
    }
return 0;
}