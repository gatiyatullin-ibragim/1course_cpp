#include<iostream>
using namespace std;

void valid(string s, int n){
    int cnt = 0;
    for(int i=0; i<s.length(); ++i){
        if(isdigit(s[i])){
            cnt += 1;
        }
    }
    if(cnt >= n){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int main(){
    string s;
    int n;
    cin >> s >> n;

    valid(s, n);
return 0;

}