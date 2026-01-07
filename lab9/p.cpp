#include<bits/stdc++.h>
using namespace std;

string toBinary(int num){
    if(num == 0){
        cout << '0';
    }

    string binary = "";
    while(num > 0){
        binary = (num%2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}

int main(){
    int n;
    cin >> n;
     vector<int> v(n);
     for(int i=0; i<n; ++i){
        cin >> v.at(i);
     }
    
    for(int c : v){
        cout << toBinary(c) << endl;
    }
    
return 0;
}