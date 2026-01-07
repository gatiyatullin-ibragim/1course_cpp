#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> 

using namespace std;

struct Point {
    int x, y;

    
    Point(int x_, int y_) : x(x_), y(y_) {}
};


int squaredDistance(const Point& a, const Point& b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main() {
    
    int px, py;
    cin >> px >> py;
    Point P(px, py);

    
    int n;
    cin >> n;

    vector<Point> points;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
    }


    sort(points.begin(), points.end(), [&P](const Point& a, const Point& b) {
        return squaredDistance(P, a) < squaredDistance(P, b);
    });

    for (const auto& point : points) {
        cout << point.x << " " << point.y << endl;
    }

    return 0;
}