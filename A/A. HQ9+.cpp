//A. HQ9+
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s; cin>>s;
	int longitud = s.size();
	bool flag = false;
	for(int i=0; i<longitud; i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9') flag = true;
	}
	if(flag) cout<<"YES";
	else	 cout<<"NO";
	
	return 0;
}
