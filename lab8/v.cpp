#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        deque<int> dec;
        for (int card = n; card >= 1; --card) 
        {

            dec.push_front(card);

            for (int i = 0; i < card; i++) 
            {
                int temp = dec.back();
                dec.pop_back();
                dec.push_front(temp);
            }
        }

        for (int i = 0; i < n; ++i) 
        {
            cout << dec[i] << (i == n - 1 ? "\n" : " ");
        }
    }

    return 0;
}