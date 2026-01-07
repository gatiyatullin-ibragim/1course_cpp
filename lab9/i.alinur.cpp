#include <iostream>
#include <algorithm>
#include <vector> 
#include <set>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;

    cin >> n;
    set<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.insert(a); 
    }

    do
    {

        for (const int& num : arr) {
            cout << num << " ";
        }

        cout << "\n";
        
    } while (next_permutation(arr.begin(), arr.end()));
    
    return 0;
}

