
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // int arr[n]; 
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // bool isDescending = true;
    // ----
    // if(arr[0] > arr[n-1]){
    //     for (int i = 0; i < n; i++) {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    //     return 0;
        // --------
    // }
    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > arr[i-1]) {
    //         isDescending = false;
    //         break;
    //     }
    // }
    // sort(arr, arr + n);

    
// -----
    // bool allequal = true;

    // for(int i=0; i<n; ++i){
    //     if(arr[i] != arr[0]){
    //         allequal = false;
    //         break;
    //     }
    // }
    // if(allequal){
    //     cout << arr[0] << endl;
    //     return 0;
    // }
//    ----- 

    // if (isDescending) {
    //     for (int i = 0; i < n; i++) {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    // }else{

    do {
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    // }
    return 0;
}



