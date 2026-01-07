#include <iostream>
#include <algorithm>
using namespace std;

void max(int a[4]){
    int max = a[0];
    
    sort(a, a + 4);
    reverse(a, a + 4);

    //сорт и реверс в скобках первый элемент включительно второй не включительно

    cout << a[1];
    cout << max;
}
int main(){
    int a[4];
    for(int i=0; i<4; ++i){
        cin >> a[i];
    }

    max(a);
return 0;
}