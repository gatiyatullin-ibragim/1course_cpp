#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
unordered_set<int>dubl;
vector<int>truth;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(dubl.find(num) == dubl.end()){
            dubl.insert(num);
            truth.push_back(num);
        }
    }

    do{
        for(int i = 0; i < truth.size(); i++){
            cout << truth[i] << " ";
        }
        cout << endl;
    }while(next_permutation(truth.begin(), truth.end()));

    return 0;
}