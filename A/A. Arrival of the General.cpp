#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int maxPos = 0;
    int minPos = 0;

    for (int i = 1; i < n; i++) {
        if (heights[i] > heights[maxPos]) {
            maxPos = i;
        }
        if (heights[i] <= heights[minPos]) {
            minPos = i;
        }
    }

    int seconds = maxPos + (n - 1 - minPos);
    if (maxPos > minPos) {
        seconds--;
    }

    cout << seconds << endl;
09
    return 0;
}



