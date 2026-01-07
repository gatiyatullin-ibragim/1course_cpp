#include<iostream>
#include<string>
using namespace std;

void vowel(string a){
    string result;
    char w[6] = {'a', 'o', 'e', 'y', 'u', 'i'};

    for(int i=0; i<a.length(); ++i){
        bool isVowel = false;
        
     
     for(int j=0; j<6; ++j){
         if(tolower(a[i]) == w[j]){
            isVowel = true;
            break;
         }
    }
       if(isupper(a[i])){
        if(i+1 < a.length() && isupper(a[i+1])){
            result += a[i];
        }else{
            continue;
        }
        }else if(!isVowel){
            result += a[i];
        }
    }
    cout << result;
}

int main(){
    string a;
    getline(cin, a);
    vowel(a);
return 0;
}