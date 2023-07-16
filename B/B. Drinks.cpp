#include<iostream>
#include<vector>
#include <iomanip>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<int> valores;
	double suma=0.0;
	for(int i=0; i<n; i++)
	{
		int a; cin>>a; valores.push_back(a);
	}
	
	for (int i = 0; i < valores.size(); i++) {
        suma += valores[i];
        
    }
    cout << fixed << setprecision(12);
	suma=suma/n;
	
	cout<<suma;
	
	return 0;
}
