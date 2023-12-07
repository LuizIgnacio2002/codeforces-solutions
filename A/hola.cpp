#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        int minNum = min({a, b, c});
        int maxNum = max({a, b, c});
        int tt = a + b + c;
        cout << tt - minNum - maxNum << "\n";
    }
    
    return 0;
}
