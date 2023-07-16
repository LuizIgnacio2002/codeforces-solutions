#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<int> miVector;
	if((n+1)%2==0) cout<<"-1"<<endl;
	else
	{
		for(int i=0; i<n; i++)
		{
			if(i%2==0)
			miVector.push_back(i+2);
			else
			{
				miVector.push_back(i);
			}
			cout<<miVector[i]<<" ";
		}
		
	}
	
	return 0;
}
