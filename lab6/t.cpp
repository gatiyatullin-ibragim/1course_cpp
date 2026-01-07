    #include <iostream>
    using namespace std;

    void calculateDifference(int k, int togzhanNOK){
        int n[k];
        int sum = 0;
        for(int i=0; i<k; ++i){
            cin >> n[i];
        }
        for(int i=0; i<k; ++i){
            sum = sum + n[i];
        }
        int nok = sum/k;
        cout << abs(nok - togzhanNOK);
    }

    int main(){
        int k;
        int togzhanNOK;
        cin >> k >> togzhanNOK;

        calculateDifference(k, togzhanNOK);
    return 0;
    }