#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
int main() 
{
    int tz; cin >> tz;
    for (int t = 0; t < tz; t++) 
	{
        vl v;
        int n; cin >> n;
        ll max1 = 0, max2 = 0;
        for (int i = 0; i < n; i++) 
		{
            ll a; cin >> a;
            v.push_back(a);
            max1 = max(max1, a);
        }

        ll ind = -1; 
        for (int i = 0; i < n; i++) 
		{
            if (v[i] == max1) 
			{
                ind = i; 
                break; 
            }
        }

        for (int i = 0; i < n; i++) 
		{
            ll rpta = 0;
            if (ind == i) 
			{
                for (int j = 0; j < n; j++) 
				{
                    if (j != ind) 
					{
                        max2 = max(max2, v[j]);
                    }
                }
                rpta = v[i] - max2;
            } 
			else 
			{
                rpta = v[i] - max1;
            }
            cout << rpta << " ";
        }
        cout << endl;
    }

    return 0;
}
