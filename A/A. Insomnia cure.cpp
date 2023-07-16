#include<iostream>
using namespace std;
/*
kesimo dragon recibió un puñetazo
1 se le cerró la cola en la puerta del balcón
mesimo dragón le pisotearon las patas 
nesimo llamar mamá
d dragones contados
*/
int main()
{
	int k, l, m, n, d;
	cin>>k>>l>>m>>n>>d;
	int suma=0;
	for(int i=1; i<=d; i++)
	{
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
		suma++;
		
	}
	cout<<suma;
	
	return 0;
}
