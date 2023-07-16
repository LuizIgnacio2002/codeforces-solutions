#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int ncoord=0, d=0;
	int x0, t; cin>>x0>>t;
	for(int i=0; i<n; i++)
	{
		
		if((x0)%2==0) // par
		{
			d=x0-t;
		}
		else
		{
			d=x0+t;
		}
		ncoord=d;
		cout<<ncoord<<endl;
		x0=ncoord;
		cin>>t;
		cin>>t;
	}
	
	return 0;
}
