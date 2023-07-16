#include <iostream>
#include <map>
using namespace std;
int main() {
    int t; cin>>t;
    for(int i=0; i<t; i++)
    {
    	int n; cin>>n;
    	int suma = 0;
    	int producto = 1;
    	int cantVcamb = 0;
    	for(int j=0; j<n; j++)
    	{
    		int a; cin>>a;
    		suma += a;
    		producto *= a;
		}
		cout<<"suma: "<<suma<<" producto: "<<producto<<endl;
		//if(n==suma*(-1)) cout<<n<<endl;
		if(suma==n*(-1))cantVcamb=n;
		else
		if(producto==-1)
		{
			if(suma<0)
			{
				cantVcamb=1;
				suma=suma+2;
				while(suma<0) 
				{
					cantVcamb++;
					suma=suma+2;
				}
			}
			else
			{
				cantVcamb=1;
			}
		}
		else
		{
			if(suma<0)
			{
				while(suma<0) 
				{
					cantVcamb++;
					suma++;
				}
			}
			else
			{
				cantVcamb=0;
			}
		}
		
		
		cout<<cantVcamb<<endl;
		
	}
    

    return 0;
}
