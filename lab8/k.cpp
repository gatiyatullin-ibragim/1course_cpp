#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int largestRectangleArea(vector<int>& histogram) {
    stack<int> s;
    int maxArea = 0;
    int i = 0;

    while (i < histogram.size()) {
        if (s.empty() || histogram[i] >= histogram[s.top()]) {
            s.push(i);
            i++;
        } else {
            int topIndex = s.top();
            s.pop();  

            int width = s.empty() ? i : i - s.top() - 1;

            maxArea = max(maxArea, histogram[topIndex] * width);
        }
    }

    while (!s.empty()) {
        int topIndex = s.top();
        s.pop();
        int width = s.empty() ? i : i - s.top() - 1;
        maxArea = max(maxArea, histogram[topIndex] * width);
    }

    return maxArea;
}

int main() {
    int n;
    cin >> n;  

    vector<int> heights(n); 
    for (int i = 0; i < n; i++) {
        cin >> heights[i]; 
    }

    int result = largestRectangleArea(heights);
    
    cout << result << endl;

    return 0;
}