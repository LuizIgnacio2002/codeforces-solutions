#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string a, b; cin>>a>>b;
	string aux=a+b;
	string x; cin>>x;
	sort(aux.begin(),aux.end());
	sort(x.begin(),x.end());
	if(aux==x) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
