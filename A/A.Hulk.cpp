#include<iostream>
#include<string>
using namespace std;
int main()
{
	string hate = "I hate";
	string love = "I love";
	string it = "it";
	string that = "that";
	string space = " ";
	int n; cin>>n;
	if(n==1) cout<<hate;
	else
	for(int i=1; i<=n; i++)
	{
		if(i%4==0) cout<<that<<space;
		else
		if(i%3==1) cout<<hate;
		else if(i%3==2) cout<<that<<space<<love;
		else if(i%3==0) cout<<that<<space<<hate;
		cout<<space;
	}
	cout<<it;
	return 0;
}
