#include<iostream>
#define N 100
using namespace std;
int main()
{
    int t; cin>>t;
    for(int i=0; i<t; i++)
    {
    	string valores;
        
        int aux=0;
        int n; cin>>n; //longitud del array
        for(int j=0; j<n; j++)
        {
            cin>>valores[j];
            cout<<"  dato guardado en "<<j<<": "<<valores[j]<<" ";
        }
        
        cout<<"saliendo de almacenar datos";
        // contando
        int espacioLargMayor = 0;
        int actual = 0;
        for (int j = 0; j < n; j++) 
		{
            if (valores[j] == '0') 
			{
                actual++;
            } 
			else 
			{
                if (actual > espacioLargMayor) 
				{
                    espacioLargMayor = actual;
                }
                actual = 0;
            }
        }
        if (actual > espacioLargMayor) 
		{
            espacioLargMayor = actual;
        }
        cout << espacioLargMayor << endl;
    }
    
    return 0;
}




