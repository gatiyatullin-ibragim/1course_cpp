#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < 0 || a >= 8 || b < 0 || b >= 8) {
        cout << "Impossible" << endl;
        return 0;
    }

    int board[8][8];

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (i == a && j == b) {
                board[i][j] = 1;
            } else {
                board[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 8; ++i) {
        board[a][i] = 2;
        board[i][b] = 2;
        if (a + i < 8 && b + i < 8) board[a + i][b + i] = 2;
        if (a - i >= 0 && b + i < 8) board[a - i][b + i] = 2;
        if (a + i < 8 && b - i >= 0) board[a + i][b - i] = 2;
        if (a - i >= 0 && b - i >= 0) board[a - i][b - i] = 2;
    }

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] == 0) {
                cout << "* ";
            } else {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}