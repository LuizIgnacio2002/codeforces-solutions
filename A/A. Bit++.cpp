#include<iostream>
#include<string>
using namespace std;
int verificar(string s);
int main()
{
	int n; cin>>n;
	string s;
	int suma=0;
	for(int i=0; i<n; i++)
	{
		int aux;
		cin>>s;
		aux=verificar(s);
		suma=suma+aux;
	}
	cout<<suma;
	return 0;
}
int verificar(string s)
{
	int y;
	if(s[0]=='+' && s[1]=='+' || s[1]=='+' && s[2]=='+') y=1;
	else y=-1;
	return y;
}
