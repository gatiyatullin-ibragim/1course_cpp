#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int score;

    while(cin >> score && score!=0){
        v.push_back(score);
    }
    int n = v.size();
    for(int i=0; i<v.size()/2; ++i){
        cout << v.at(i) + v.at(n-1-i) << ' ';
    }
    if(n%2 != 0){
        cout << v.at(n/2) << ' ';
    }

    return 0;
}