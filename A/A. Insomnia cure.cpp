#include<iostream>
using namespace std;
/*
kesimo dragon recibi� un pu�etazo
1 se le cerr� la cola en la puerta del balc�n
mesimo drag�n le pisotearon las patas 
nesimo llamar mam�
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
