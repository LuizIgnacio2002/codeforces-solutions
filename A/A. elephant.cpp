//A. Elephant
#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int cant=0;
	int uno, dos, tres, cuatro, cinco;
	if(n<=5) cout<<"1";
	else
	{
		while(n>5)
		{
			n=n-5;
			cant++;
		}
		cout<<cant+1;
	}
	
	return 0;
}
