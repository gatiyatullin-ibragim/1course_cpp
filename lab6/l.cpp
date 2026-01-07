    #include <iostream>
    #include <string>
    using namespace std;

    void validstring(string s, int n) {
        int cnt = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (isdigit(s[i])) {
                cnt += 1;
                if(cnt>=n){
                    cout << "Valid";
                    return;
                }
            }else{
                cnt = 0;
            }
        }
        cout <<"Not valid";
    }

    int main() {
        string s;
        int n;
        cin >> s >> n;

        validstring(s, n);

        return 0;
    }
