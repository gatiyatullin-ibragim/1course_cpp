#include <iostream>
using namespace std;

void sum (int a){
    int res = 0;
    while(a!=0){
        res += a%10;
        a = a/10;
    }
 cout << res;
}
int main(){
    int a;

    cin >> a;

    sum(a);
return 0;
}