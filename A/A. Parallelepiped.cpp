#include<iostream>
#include<cmath>
typedef long long int bigint;
using namespace std;
int main()
{
	int n; cin>>n;
	int k; cin>>k;
	int naa;
	
	for(int i=1; i<=n; i++)
	{
		if(k==i && k<n/2)
		{
			naa=i*2-1;
		}
		else if(k==i)
		{
			naa=i*2;
		}
		if(k==n)
		{
			if(n%2==0) naa=n;
			else naa=n-1;
		}
		
	}
	cout<<naa;
	
	
	return 0;
}
