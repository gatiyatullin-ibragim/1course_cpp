#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> ma;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        ma[a]++;
    }


    if(ma.size() < 2){
        cout << 0 << endl;
    
    return 0;
}
    

     map<int, int>::iterator it = ma.begin();
    ++it; 

    cout << it->second << endl;

    


return 0;
}