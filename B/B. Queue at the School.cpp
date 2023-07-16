#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, t; 
	cin>>n>>t;
	char s[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>s[i];
	}
	
	for(int i=0; i<n-1; i++)
	{
		while(t>0)
		{
			if(s[i]<s[i+1])
			{
				char aux = '\0';
				aux=s[i];
				s[i]=s[i+1];
				s[i+1]=aux;
			}
			t--;
		}
	}
	cout<<s<<endl;
	
	return 0;
}
