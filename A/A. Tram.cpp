#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n; 
	int max=0;
	int max2=-1;
	for(int i=1; i<=n; i++)
	{
		int a, b; cin>>a>>b;
		max=max+b-a;
		if(max>max2)
		{
			max2=max;
		}
		
	}
	cout<<max2;
	
	return 0;
}
