//A. Blackjack
#include<iostream>
using namespace std;
int carDosDiez(int n);
int kingQueenJack(int n);
int ace(int n);
int main()
{
	// se tiene 12 de espadas, vale 10 debo llegar al valor de n
	int n; cin>>n;
	int carta_en_mano = 10;
	int suma;
	// cartas totales 2 3 4 .. 10 x4
	// king queen jack = 10 ... x4
	// ace 1 or 11 x4
	if(n<11) suma=0;
	else
	{
		suma = carDosDiez(n) + kingQueenJack(n) + ace(n);
	}
	cout<<suma;
	return 0;
}
int carDosDiez(int n)
{
	int val;
	if(n==21) val=0; // no puedo llegar a 11 con cartas de 2 a 10
	else if(n>11 && n<21) val=4; // para valores de 12 a 20 se puede 4 cartas 
	return val; 
}
int kingQueenJack(int n)
{
	// se tiene ya una queen quedan solo 3 en juego
	int val=0;
	if(n==20) val=11;
	return val;
}
int ace(int n)
{
	int val=0;
	if(n==11 || n==21) val=4;
	return val;
}
