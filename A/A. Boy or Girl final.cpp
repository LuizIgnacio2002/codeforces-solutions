#include<iostream>
#include<string>
#include <set>
using namespace std;
int main()
{
	string s; cin>>s;
	int longitud = s.size();
	set<char> palabrasNoRep;
	for(char caracter : s)
	{
		palabrasNoRep.insert(caracter);
	}
	
	for (char elemento : palabrasNoRep ) {
        cout << elemento << " ";
    }
	
	return 0;
}
