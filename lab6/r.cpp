#include <iostream>
using namespace std;

void toUpper(char c){
    if(c >= 'a' && c <= 'z') c = toupper(c);
    cout << c;
}

int main(){
    char c;
    cin >> c;

    toUpper(c);
return 0;
}