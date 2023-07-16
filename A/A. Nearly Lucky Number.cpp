#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s; cin>>s;
	int aux=0;
	bool findSiete;
	bool findCuatro;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='4')
		{
			findCuatro=true;
		}
		
		if(s[i]=='7')
		{
			findSiete=true;
		}
		
		if(s[i]=='4' || s[i]=='7')
		{
			aux++;
		}
	}
	if(aux==s.size() && findCuatro && findSiete)
		{
			cout<<"YES";
		}		
	else cout<<"NO";
	
	return 0;
}
