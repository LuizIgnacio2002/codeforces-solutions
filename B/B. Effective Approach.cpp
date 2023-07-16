#include<iostream>
using namespace std;
int VasyaBusqueda(int v[], int n, int x);
int PetyaBusqueda(int v[], int n, int x);
int main()
{
	int n; cin>>n; // cantidad de elemento del array
	int listaValores[n]; // contiene los valores
	int Vasya=0;
	int Petya=0;
	//llenado de valores
	for(int i=0; i<n; i++)
	{
		cin>>listaValores[i];
	}
	int cantConsultas; cin>>cantConsultas; 
	for(int i=0; i<cantConsultas; i++)
	{
		int x; cin>>x;
		Vasya = Vasya + VasyaBusqueda(listaValores, n, x);
		Petya = Petya + PetyaBusqueda(listaValores, n, x);
		
	}
	cout<<Vasya<<" "<<Petya;
	return 0;
}
int VasyaBusqueda(int v[], int n, int x)
{
	int cantCompara=0;
	bool encontrado=false;
	for(int i=0; i<n; i++)
	{
		cantCompara++;
		if(v[i]==x)
		{
			encontrado=true;
		}
		if(encontrado==true) break;
	}
	return cantCompara;
}

int PetyaBusqueda(int v[], int n, int x)
{
	int cantCompara=0;
	bool encontrado=false;
	for(int i=n-1; i>=0	; i--)
	{
		cantCompara++;
		if(v[i]==x)
		{
			encontrado=true;
		}
		if(encontrado==true) break;
	}
	return cantCompara;
}
