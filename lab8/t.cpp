#include <iostream> 
#include <algorithm> 
#include <stack>
#include <vector> 
using namespace std;

string DecToBin(long long number){
    string binaryRepresentation = "";
    while(number != 0){
        binaryRepresentation = ((number % 2 == 0) ? '0' : '1') + binaryRepresentation;
        number /= 2;
    }
    return binaryRepresentation;
}
int main() { 
    int amountOfNumbers;
    cin >> amountOfNumbers;
    vector<string> IsGood;
    for(int i = 0; i < amountOfNumbers; i++)
    {
        long long number;
        cin >> number;
        string binaryNum = DecToBin(number);
        for(int j = 0; !binaryNum.empty() && j < binaryNum.length() - 1;){
            
            if((binaryNum[j] == '1' && binaryNum[j + 1] == '0')){
                binaryNum.erase(j, 2);
                j = 0;
                }
            else
                j++;
        }
        
        if(binaryNum.empty())
            IsGood.push_back("YES");
        else
            IsGood.push_back("NO");

    }
    for(auto я : IsGood)
        cout<<я<<'\n';
    
}