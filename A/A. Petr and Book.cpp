#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int suma = 0;
	int s=0;
	int dia = 0;
	int valores[7];
	for(int i=0; i<7; i++)
	{
		int a; cin>>a;
		suma += a;
		valores[i]=a;	
	}
	
	if(suma>=n)
	{
		int contador = 0;
		while(s<n)
		{
			s += valores[contador];
			contador++;
			dia++;
		}
	}
	else
	{
		while(suma<n)
		{
			n -= suma;
		}
		int contador = 0;
		while(s<n)
		{
			s += valores[contador];
			contador++;
			dia++;
		}
	}
	
	cout<<dia;
	return 0;
}
