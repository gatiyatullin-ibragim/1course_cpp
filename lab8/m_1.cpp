#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<string> boysQueue;

    for (int i = 0; i < n; ++i) {
        int actionType;
        cin >> actionType;

        if (actionType == 1) {
            string boyName;
            cin >> boyName;
            boysQueue.push(boyName);
        } else if (actionType == 2) {
            if (!boysQueue.empty()) {
                boysQueue.pop();
            }
        }

        if (boysQueue.empty()) {
            cout << "queue is empty" << endl;
        } else {
            cout << boysQueue.front() << endl;
        }
    }

    return 0;
}