#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> gay;
    vector<int> sorted_odd;
    vector<int> sorted_even;
    for(int i=0; i<n; ++i){
        int chislo;
        cin >> chislo;
        gay.push_back(chislo);
    }
    for(int i=0; i<n; ++i){
        if(gay.at(i) % 2 == 0){
            sorted_even.push_back(gay.at(i));
        }
        else{
            sorted_odd.push_back(gay.at(i));
        }
    }
    sort(sorted_even.begin(), sorted_even.end());
    reverse(sorted_even.begin(), sorted_even.end());
    sort(sorted_odd.begin(), sorted_odd.end());

    for(int i=0; i<sorted_even.size(); ++i){
        cout << sorted_even.at(i) << " ";
    }
    for(int i=0; i<sorted_odd.size(); ++i){
        cout << sorted_odd.at(i) << " ";
    }

return 0;

}