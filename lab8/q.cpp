#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> stack;
    vector<int> v;

    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        
        if(a>0){

        stack.push(a);
        }else if(!stack.empty() && a == 0){
            v.push_back(stack.top());
            stack.pop();
        }
    }

    if(v.empty()){
        cout << "-1" << endl;
        return 0;
    }
    else{
        for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
            cout << *it << " " << endl;
        }
    }
return 0;
}