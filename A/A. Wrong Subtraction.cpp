#include<iostream>
using namespace std;
int main()
{
	int n, x; cin>>n>>x;
	while(x>0)
	{
			if(n<10)
			{
				n--;
			}
			else if(n%10==0)
			{
				n=n/10;
			}
			else
			{
				n=n-1;
			}	
		x--;
	}
	cout<<n;
	return 0;
}
