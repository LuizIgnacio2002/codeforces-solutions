#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> letter(n, vector<char>(m));
    char p;
    cin >> p;

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            cin >> x;
            letter[i][j] = x;
        }
    }

    set<char> ms;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (letter[i][j] == p) {
                if (i > 0 && letter[i - 1][j] != '.' && letter[i - 1][j] != p)
                    ms.insert(letter[i - 1][j]);

                if (i < n - 1 && letter[i + 1][j] != '.' && letter[i + 1][j] != p)
                    ms.insert(letter[i + 1][j]);

                if (j > 0 && letter[i][j - 1] != '.' && letter[i][j - 1] != p)
                    ms.insert(letter[i][j - 1]);

                if (j < m - 1 && letter[i][j + 1] != '.' && letter[i][j + 1] != p)
                    ms.insert(letter[i][j + 1]);
            }
        }
    }

    cout << ms.size() << "\n";
    return 0;
}
