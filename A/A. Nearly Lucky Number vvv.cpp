#include<iostream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s; cin>>s;
	int aux=0;
	bool findSiete=false;
	bool findCuatro=false;
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
	cout<<"canfndf"<<aux<<endl;
	if((aux==7 || aux==4))
		{
			cout<<"YES";
		}		
	else cout<<"NO";
	
	
	
	return 0;
}
