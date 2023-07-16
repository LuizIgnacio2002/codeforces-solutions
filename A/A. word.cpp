#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s; cin>>s;
	int contMayus=0, contMinus=0;
	for(int i=0; i<s.size(); i++)
	{
		if(isupper(s[i])) contMayus++;
		else if(islower(s[i])) contMinus++;
	}
	if(contMayus>contMinus)
	{
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	else
	{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	cout<<s;
	return 0;
}
