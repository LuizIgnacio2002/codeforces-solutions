#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	for(int i=n+1; i<=9000; i++)
	{
		int unidad = i%10;
		int decena = ((i-unidad)/10)%10;
		int centena= (((i-10*decena)-unidad)/100)%10;
		int millar = (i-100*centena-10*decena-unidad)/1000;
		if(unidad!=decena &&
		   unidad!=centena &&
		   unidad!=millar &&
		   decena!=centena &&
		   centena!=millar)
		{
			cout<<i<<endl;
			break;
		}
		
	}
	
	return 0;
}
