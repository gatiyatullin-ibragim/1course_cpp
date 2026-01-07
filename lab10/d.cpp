#include<bits/stdc++.h>
using namespace std;


struct student
{
    int totalscore=0;
    int cnt=0;
};



int main(){
    int n;
    cin >>n;
    map<string, student> m;

    for(int i=0; i<n; ++i){
        string name;
        int grade;
        cin >> name >> grade;
        student[name].totalscore += grade;
        student[name].cnt += 1;
    }

    for(auto &entry : student){
        string name = entry.first;
        student info = entry.second;
        double average = (double)info.totalscore/info.cnt;
        printf("%s %.6f\n", name.c_str(), average);

    }


    return 0;
}