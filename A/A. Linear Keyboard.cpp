#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n; cin>>n;
	for(int i=0; i<n; i++)
	{
		int diferencia = 0;
		int suma = 0;
		string s; cin>>s;
		string palabra; cin>>palabra;
		int a=0, b=0;
		for(int j=0; j<palabra.size(); j++)
		{
			for(int z=0; z<26; z++)
			{
				if(palabra[j]==s[z])
				{
					a=z+1;
					//cout<<"a: "<<a<<" b: "<<b<<" ...";
					if(a!=0 && b!=0)
					diferencia=abs(a-b);
				}
				b=a;
			}
			//cout<<" la diferencia es: "<<diferencia<<" "<<endl;
			suma += diferencia;
		}
		//cout<<"la suma es: "<<suma<<endl;
		cout<<suma<<endl;
	}
	
	
	return 0;
}
