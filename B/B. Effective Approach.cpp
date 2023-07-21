#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; // Cantidad de elementos en el vector temp
    cin >> n;
    
    vector<long long> temp;
    for(int i = 0; i < n; i++)
    {
        long long valor;
        cin >> valor;
        temp.push_back(valor);
    }

    long long m; // Cantidad de elementos en el vector temp2
    cin >> m;
    vector<long long> temp2;

    for(int i = 0; i < m; i++)
    {
        long long valor;
        cin >> valor;
        temp2.push_back(valor);
    }

    unordered_map<long long, long long> mapa;
    for(int i = 0; i < temp.size(); i++)
    {
        mapa[temp[i]] = i;
    }

    long long ans1 = 0, ans2 = 0;
    for(int i = 0; i < temp2.size(); i++)
    {
        ans1 += mapa[temp2[i]] + 1;
        ans2 += temp.size() - mapa[temp2[i]];
    }
    cout << ans1 << " " << ans2 << endl;

    return 0;
}
