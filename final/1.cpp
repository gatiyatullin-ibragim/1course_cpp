    #include<bits/stdc++.h>
    using namespace std;

    int main(){

        int n,m;
        cin >> n >> m;

        vector<vector<int>> v(n, vector<int>(m));

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cin >> v[i][j];
            }
        }

        vector<vector<int>> rotated(m, vector<int>(n));

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                rotated[j][n-i-1] = v[i][j];
            }
        }

        cout << m << ' ' << n << endl;

        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                cout << rotated[i][j] << ' ';
            }
            cout << endl;
        }



        return 0;
    }