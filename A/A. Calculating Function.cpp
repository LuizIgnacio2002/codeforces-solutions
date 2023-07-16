#include<iostream>
using namespace std;
typedef long long int bigint;
int main()
{
	bigint n; cin>>n;
	bigint suma=0;
	for(int i=1; i<=n; i++)
	{
		int aux=i;
		if(i%2!=0) aux=i*-1;
		suma=suma+aux;	
		cout<<aux<<endl;
	}
	cout<<suma;
	return 0;
}
