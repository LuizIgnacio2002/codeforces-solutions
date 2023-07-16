#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	cout<<"iooie";
	string s; cin>>s;
	transform(s.begin(), s.begin()+1, s.begin(), ::toupper);
	cout<<s;
	return 0;
}
