    // #include<iostream>
    // #include<map>
    // #include<vector>
    // #include<algorithm>
    // #include<iomanip>
    // using namespace std;

    // struct gpa{
    //     int cnt=0;
    //     double overall=0.0;
    // };



    // int main(){
    //     int n;
    //     cin >> n;

    //     map<string, gpa> m;
    //     for(int i=0; i<cnt; ++i){
    //         string name;
    //         int gpa;
    //         cin >> name >> gpa;

    //         m[name].sum += gpa;
    //         m[name].cnt ++;
    //     }

    //     vector<pair<string, gpa>> students(m.begin(), m.end());
    //     vector<pair<string,double>> results;

    //     for(int i=0; i<students.size(); ++i){
    //         double overallGPA = students.at(i).second.sum / students.at(i).second.count;
    //         results.at(i).emplace_back(students.at(i).first, overallGPA)
    //     }

    //     sort(results.begin(), results.end(), [](pair<string, double> &a, pi<string, double> &b){
    //         if(a.second != b.second){
    //             return a.second > b.second;
    //         }
    //         return a.first < b.first;
    //     });

    //     for(int i=0; i<results.size(); ++i){
    //         cout << results.at(i).first << " : " << results.at(i).second << endl;
    //     }



    // return 0;
    // }

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct gpa 
{
    int counter = 0;
    double sum = 0.0;
};

int main () {

    int n;
    cin >> n;

    map<string, gpa> m;    // map<string, pair<double, int> > v;

    for (int i = 0; i < n; i++) 
    {
        string name;
        int GPA;
        cin >> name >> GPA;

        m[name].sum += GPA;
        m[name].counter++;
    }

    vector<pair<string, gpa> > students(m.begin(), m.end());
    vector<pair<string, double> > results;

    for (int i = 0; i < students.size(); i++) 
    {
        double overallGPA = students.at(i).second.sum / students.at(i).second.counter;
        results.emplace_back(students.at(i).first,overallGPA);

    }

    sort(results.begin(), results.end(), [](pair<string, double> &a, pair<string,double> &b)
    {

        if (a.second != b.second) 
        {
            return a.second > b.second;
        }

        return a.first < b.first;

    });

    
    for (int i = 0; i < results.size(); i++) 
    {
        cout << fixed << setprecision(3) << results.at(i).first << ": " << results.at(i).second << endl;
    }



    return 0;
}