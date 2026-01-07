#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    int sum = (n*(n+1))/2;

    int sum2=0;
    for(int i=0; i<n; ++i){
        sum2 += arr[i];
        }
    int lost = sum - sum2;
    cout << lost;

return 0; 
}