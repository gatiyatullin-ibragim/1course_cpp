#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    for(int i=0; s.length(); ++i){
        if(s == t){
            cout << "YES";
        }else{
            cout << "NO";
        }
        break;
    }
    return 0;
}
