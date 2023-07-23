#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pl> vpl;
int main()
{
	int tz; cin>>tz;
	for(int t=0; t<tz; t++)
	{
		int total=0;
		map<char, int> mp;
		int n; cin>>n;
		for(int i=0; i<n; i++)
		{
			char x; cin>>x;
			if(mp.count(x)==0) mp[x]=2;
			else mp[x]=1;
			total += mp[x];
		}
		
		cout<<total<<endl;
	}
	
	return 0;
}
