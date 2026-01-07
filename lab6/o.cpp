#include <iostream>
using namespace std;

void lucky(int a){
    int last_digit = a%10;
    int b=0;
    while(a>0){
    b += a%10;
    a/=10;
    }
    if(b % last_digit == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
    

int main(){
    int a;
    cin >> a;

    lucky(a);

return 0;
}