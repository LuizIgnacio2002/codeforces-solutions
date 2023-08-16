#include<bits/stdc++.h>
using namespace std;
#define		F				first
#define 	S				second
#define		PB				push_back
#define		MP				make_pair
typedef 	long long 		ll;
typedef 	long double		ld;
typedef 	vector<int> 	vi;
typedef 	vector<ld> 		vd;
typedef 	vector<ll> 		vl;
int main() 
{
	int tz; cin >> tz;
	int pre = 0;
	int count = 0;
	for(int t = 0; t < tz; t++)
	{
		int a; cin >> a;
		pre += a;
		if(pre<0)
		{
			pre++;
			count++;
		}
	}
	cout << count << endl;
	
	return 0;
}
