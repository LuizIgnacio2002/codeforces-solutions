#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n; cin>>n;
	string cadena = to_string(n);
	int longitud = cadena.size();
	bool valor=true;
	for(int i=0; i<longitud; i++)
	{
		if(cadena[i]!='4' && cadena[i]!='7')
		{
			valor=false;
		}
	}
	if(n%4==0 || n%7==0 || valor) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
