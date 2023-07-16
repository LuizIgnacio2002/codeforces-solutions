#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int cantCinco = 0;
	int cantCero = 0;
	for(int i=0; i<n; i++)
	{
		int a; cin>>a;
		if(a==5) cantCinco++;
		if(a==0) cantCero++;
		
	}
	if(cantCero==0) cout<<"-1";
	else if(cantCinco<9) cout<<"0";
	else
	{
		int TotC = cantCinco/9;
		
		for(int i=0; i<TotC; i++)
		{
			for(int j=0; j<9; j++)
			cout<<"5";
		}
		for(int i=0; i<cantCero; i++)
		{
			cout<<"0";
		}
	}
	
	
	
	return 0;
}
