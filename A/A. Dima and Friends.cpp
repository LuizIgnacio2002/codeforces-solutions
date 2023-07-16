#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int suma=0;
	for(int i=0; i<n; i++)
	{
		int a; cin>>a;
		suma += a;
	}
	int dedos = 0;
	for(int i=1; i<=5; i++)
	{
		if((suma+i)%(n+1)!=1) dedos++;
	}
	cout<<dedos;
	return 0;
}
