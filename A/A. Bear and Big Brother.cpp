#include<iostream>
using namespace std;
int main()
{
	int l, b;	// l<=b
	cin>>l>>b;
	int cant=0;
	while(l<=b)
	{
		l=l*3;
		b=b*2;
		cant++;
	}
	cout<<cant;
	
	return 0;
}
