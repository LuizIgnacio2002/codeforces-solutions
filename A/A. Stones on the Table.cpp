#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n; cin>>n;
	string s; cin>>s;
	
	int aux1=0;
	for(int i=0; i<n-1; i++)
	{
		if(s[i]==s[i+1])
		{
			aux1++;
		}
	}
	cout<<aux1;
	
	return 0;
}
