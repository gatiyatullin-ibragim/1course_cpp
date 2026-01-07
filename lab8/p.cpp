#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> w;
    
    for(int i=0; i<n; ++i){
        int strength;
        cin >> strength;
       

    while(!w.empty() && strength >= w.top() ){
        w.pop();
    }
     w.push(strength);
     cout << w.size()<<endl;
    }
return 0;

}