#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s; cin>>s;
	int longitud = s.size(); 
	int cant=0;
	bool peligro=false;
	for(int i=0; i<longitud-1; i++)
	{
		// 1 0 0 0 0 0 0 0 1
		if(s[i]==s[i+1]) cant++;
		if(cant>=6)
		{
			peligro=true;
		}
		if(s[i]!=s[i+1]) cant=0;
	}
	if(peligro) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
