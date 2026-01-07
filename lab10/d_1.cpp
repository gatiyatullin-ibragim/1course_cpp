#include<bits/stdc++.h>
using namespace std;

int main() {
    int recordCount;
    cin >> recordCount;

    map<string, vector<int> > studentGPAs;

    for (int i = 0; i < recordCount; ++i) 
    {
        string studentName;
        int gpa;
        cin >> studentName >> gpa;
        studentGPAs[studentName].push_back(gpa); 
    }

    vector<string> students;
    for (map<string, vector<int> >::iterator it = studentGPAs.begin(); it != studentGPAs.end(); ++it) 
    {
        students.push_back(it->first); 
    }

    sort(students.begin(), students.end());

    for (int i = 0; i < students.size(); i++) 
    { 
        vector<int> gpas = studentGPAs[students[i]]; 
        double totalGPA = 0;
        
       
        for (int i = 0; i < gpas.size(); i++) 
        {
            totalGPA += gpas.at(i);
        }
        
        double overallGPA = totalGPA / gpas.size(); 
        cout << students[i] <<' ' <<fixed << setprecision(6) << overallGPA << endl; 
    }

    return 0;
}