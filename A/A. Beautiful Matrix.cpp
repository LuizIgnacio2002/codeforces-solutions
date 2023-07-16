#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int matriz[5][5];
	
	//llenado de 0
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
		{
			cin>>matriz[i][j];
		}
	
	//mostrar matriz
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			
			if(matriz[i][j]==1)
			{
				cout<<abs(2-i)+abs(2-j);
			}
		}
		cout<<endl;
	}
	return 0;
}
