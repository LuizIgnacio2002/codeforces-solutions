#include<iostream>
#include <string>

using namespace std;
int main()
{
	int n, longitud;
	string palabra;
	cout<<"introduzca el valor de n: "; cin>>n; cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"coloque la palabra: "; cin>>palabra;
		longitud=palabra.size();
		if(longitud>9)
		{
			cout<<palabra[0]<<longitud-2<<palabra[longitud-1]<<endl;
		}
		else
		{
			cout<<palabra;
		}
	}
	
	return 0;
}
