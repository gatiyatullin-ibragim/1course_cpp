#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int count;
    cin >> count;

    vector <pair<int,int> > points;

    for(int i=0; i<count; ++i){
        int x,y;
        cin >> x >> y;
        points.push_back(make_pair(x,y));
    }
    sort(points.begin(), points.end());

    for(int i=0; i<count; ++i){
        cout << points.at(i).first<<' '<< points.at(i).second << endl;
    }
    
    return 0;
}