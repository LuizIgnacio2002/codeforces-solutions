#include<iostream>
#define N 100
using namespace std;
int main()
{
	int n; cin>>n;
	int aux=0;
	int numbers[N];
	int cantAmazing=0;
	for(int i=0; i<n; i++)
	{
		cin>>numbers[i];
		aux=aux+numbers[i];
		if(i!=0 && aux>numbers[i]) cantAmazing++;
	}	
	
	for(int i=0; i<n-1; i++)
	{
		if(numbers[i]<numbers[i+1]) cantAmazing++;
	}	
	
	cout<<cantAmazing;
	
	return 0;
}
