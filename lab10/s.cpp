#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ShopTime {
    int open; 
    int close; 
};

int timeToMinutes(int hours, int minutes) {
    return hours * 60 + minutes;
}

int findIntersection(vector<ShopTime>& shops) {
    int latest_open = 0; 
    int earliest_close = 24 * 60; 

    for (const auto& shop : shops) {
        if (shop.open > shop.close) {
            earliest_close = min(earliest_close, shop.close);
            latest_open = max(latest_open, shop.open);
        } else {
            latest_open = max(latest_open, shop.open);
            earliest_close = min(earliest_close, shop.close);
        }
    }

    if (earliest_close < latest_open) {
        return 0;
    }

    return earliest_close - latest_open;
}

int main() {
    int N;
    cin >> N;

    vector<ShopTime> shops(N);

    for (int i = 0; i < N; ++i) {
        int open_h, open_m, close_h, close_m;
        cin >> open_h >> open_m >> close_h >> close_m;

        shops[i].open = timeToMinutes(open_h, open_m);
        shops[i].close = timeToMinutes(close_h, close_m);
    }

    int result = findIntersection(shops);
    cout << result << endl;

    return 0;
}
