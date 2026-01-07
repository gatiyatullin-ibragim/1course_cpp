#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    char t;
    cin >> s >> t;
    int index = s.find(t);

    if(index == string :: npos){
        return 0;
    }

    int index2 = s.rfind(t);

    if(index == index2){
        cout << index << endl;
    }else{
        cout << index << ' '<< index2<<endl;
    }
return 0;
}