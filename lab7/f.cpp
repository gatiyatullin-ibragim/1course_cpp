#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int numofranges;
    cin>>numofranges;

    for(int i=0; i<numofranges; ++i){
        int L,R;
        cin >> L >> R;
        int cnt=0;
        int max = 0;

        for(int j=L; j<=R; ++j){
            if(v.at(j)>max){
                cnt ++;
                max = v.at(j);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}