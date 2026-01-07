#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double hypotenus(int a, int b){
    return sqrt(pow(a,2) + pow(b,2));
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << scientific << setprecision(3) << hypotenus(a,b) << endl;
return 0;
}