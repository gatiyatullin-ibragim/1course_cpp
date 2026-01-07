#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int cnt;
    cin >> cnt;

    int arr[cnt];

    for(int i=0; i<cnt; ++i){
        cin >> arr[i];
    }

    int reversed[cnt];

    for(int i=0; i<cnt; ++i){
        reversed[i] = arr[i];
    }

    reverse(reversed, reversed + cnt);

    for(int i=0; i<cnt; ++i){
        if(arr[i] == reversed[i]){
            cout << "OK" << endl;
        }else{
            cout << "Instead of" <<' '<< arr[i] <<" " << "here was " << reversed[i] << endl;
        }
    }

return 0;
}