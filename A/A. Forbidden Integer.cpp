#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 1; i <= n; i++) {
                cout << 1 << " ";
            }
            cout << endl;
        } else {
            if (k < 2) {
                cout << "NO" << endl;
            } else {
                if (n % 2 == 0) {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (int i = 1; i <= n / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << endl;
                } else {
                    if (k < 3) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                        cout << n / 2 << endl;
                        for (int i = 1; i < n / 2; i++) {
                            cout << 2 << " ";
                        }
                        cout << 3 << endl;
                    }
                }
            }
        }
    }
    return 0;
}

