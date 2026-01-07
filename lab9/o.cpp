// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// bool isPalindrom(vector<int> &a){
//     for(int i=0; i<a.size();++i){
//         if(a.at(i) != a.at(a.size() - i - 1)) return false;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0; i<n; ++i){
//         int a;
//         cin >> a;
//         v.emplace_back(a);
//     }

//     sort(v.begin(), v.end());



//     do{
//         if(isPalindrom(v)){
//             for(int i=0; i<v.size(); ++i){
//                 cout << v.at(i)<< ' ';
//             }
//             cout <<endl;
//             return 0;
//         }
//     }while(next_permutation(v.begin(), v.end()));

//     //cout << "Impossible" << endl;
// return 0;
// }


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool Palindrome(vector<int> &a) 
{
    for (int i = 0; i < a.size(); i++) 
    {
        if (a.at(i) != a.at(a.size() - i - 1)) 
        {
            return false;
        }
    }
    return true;

}
int main () {

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) 
    {
        int a;
        cin >> a;
        v.emplace_back(a);
    }

    sort(v.begin(), v.end());

    do 
    {
        if (Palindrome(v)) 
        {
            for (int i = 0; i < v.size(); i++) 
            {
                cout << v.at(i) << " ";
            }
            cout << endl;
            return 0;
        }

    } while(next_permutation(v.begin(), v.end()));


    cout << "Impossible" << endl;
    
    return 0;
}