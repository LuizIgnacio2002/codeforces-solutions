#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
void resolver() {
    int n; cin >> n;
    map<string, int> mapa;
    mapa["00"] = mapa["01"] = mapa["10"] = mapa["11"] = 1e9;
    int respuesta = 1e9;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x; string s; cin >> s;
        mapa[s] = min(mapa[s], x);
    }
    if (min(mapa["11"], mapa["10"] + mapa["01"]) > (int)1e6) {
        cout << "-1\n";
    } else {
        cout << min(mapa["11"], mapa["10"] + mapa["01"]) << "\n";
    }
}
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        resolver();
    }
}
