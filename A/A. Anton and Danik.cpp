#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s; cin>>s;
	int longitud=s.size();
	int cantA=0, cantD=0;
	for(int i=0; i<longitud; i++)
	{
		if(s[i]=='A') cantA++;
		else if(s[i]=='D') cantD++;
	}
	if(cantA>cantD) cout<<"Anton";
	else if(cantA<cantD) cout<<"Danik";
	else cout<<"Friendship";
	
	return 0;
}
