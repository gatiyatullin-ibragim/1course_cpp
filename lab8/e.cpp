    #include<iostream>
    #include<vector>
    #include<map>
    #include<string>
    using namespace std;

    int main(){
        int n;
        cin >> n;

        map<string,int> v;

        for(int i=0; i<n; ++i){
            string key;
            cin >>key;
            v[key]++;
        }

        int cnt=0;
        for(map<string,int>::iterator it = v.begin(); it!= v.end(); ++it){
            if(it->second == 3){
                cnt++;
        }
        }
    cout << cnt;
    }