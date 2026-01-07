#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;

    queue<string> s;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        if(a==1){
            string name;
            cin >> name;
            s.push(name);
        }
        else if(a==2){
            if(!s.empty()){
                s.pop();
            }
        }
        
    }if(s.empty()){
            cout <<"queue is empty" << endl;
        }
        else{
            cout << s.front() << endl;
        }
return  0;
}

