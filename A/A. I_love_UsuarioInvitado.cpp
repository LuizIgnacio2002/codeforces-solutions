#include<iostream>
using namespace std;
/*
amazing si rompe su mayor o peor record

*/
int main()
{
	int max=-1;
	int min=99999;
	int n; cin>>n;
	int cantVeces=-2;
	for(int i=0; i<n; i++)
	{
		int a; cin>>a;
		if(a<min)
		{
			min=a;
			cantVeces++;
		}
		if(a>max)
		{
			max=a;
			cantVeces++;
		}
		
		
	}
	cout<<cantVeces;
	return 0;
}
