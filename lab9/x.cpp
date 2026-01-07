#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a;
    int j=0;
    cin>>a;
    vector<int> arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    if (all_of(arr.begin(), arr.end(), & {return i == arr[0];})) {
        cout<<arr[0];
        return 0;
    }
    do {
        for (auto x: arr){
            cout << x<<" ";
        }
        cout << endl;
    } while (next_permutation(arr.begin(), arr.end()));
    return 0;
}