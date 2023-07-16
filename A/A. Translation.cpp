#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s; cin>>s;
	string t; cin>>t;
	int longS = s.size();
	int longT = t.size();
	int cantveces = 0;
	if(longS==longT) 
	{
		for(int i=0; i<longS; i++)
		{
			if(s[i]==t[longS-i-1])
			cantveces++;
		}
	}
	if(cantveces==longS) cout<<"YES";
	else cout<<"NO";
	return 0;
}
