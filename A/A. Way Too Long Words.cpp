#include<iostream>
#include <string>
 
using namespace std;
int main()
{
	int n, longitud;
	string palabra;
	cin>>n; cout<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>palabra;
		longitud=palabra.size();
		if(longitud>10)
		{
			cout<<palabra[0]<<longitud-2<<palabra[longitud-1]<<endl;
		}
		else
		{
			cout<<palabra<<endl;
		}
	}
	
	return 0;
}
