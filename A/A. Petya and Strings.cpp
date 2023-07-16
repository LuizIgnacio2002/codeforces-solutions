#include<iostream>
#include <string>
using namespace std;
int main()
{
	//letra a en ASCII 97
	//letra A en ASCII 65
	//42 unidades de diferencia
	bool flag=false;
 	string s1, s2; cin>>s1>>s2;
 	int cants1=0, cants2=0;
	//pasando ambos a minus
	for(int i=0; i<s1.size(); i++)
	{
		//verificando mayus a minus
		if(int(s1[i])>=65 && int(s1[i])<=90) s1[i]=s1[i]+32;
		if(int(s2[i])>=65 && int(s2[i])<=90) s2[i]=s2[i]+32;
		cants1=cants1+int(s1[i]);
		cants2=cants2+int(s2[i]);
		if(cants1<cants2) 
		{
			flag=false; break;
		}
		else if(cants1>cants2) 
		{
			flag=true; break;
		}
	}
	//verificando que una sea mayor que otra
	if(cants1==cants2) cout<<"0";
	else if(flag) cout<<"1";
	else cout<<"-1";
	return 0;
}
