#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int sumOfMins = 0;

    for (int j = 0; j < m; ++j) {
        int minElem = matrix[0][j];
        int minRow = 0;

        for (int i = 1; i < n; ++i) {
            if (matrix[i][j] < minElem) {
                minElem = matrix[i][j];
                minRow = i;
            }
        }

        sumOfMins += minElem;
        cout << "Column " << j << ": min element = " << minElem << " at (" << minRow << ", " << j << ")" << endl;
    }

    cout << "Sum of min elements: " << sumOfMins << endl;

    return 0;
}
