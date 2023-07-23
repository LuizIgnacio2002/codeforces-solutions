#include<iostream>
using namespace std;
 
const int MAX = 100000; 
int main()
{
    int n;
    cin >> n;
    if(n <= 0) {
        cout << "El valor de n debe ser mayor que cero" << endl;
        return 0;
    }
    int val[MAX][3]; // define el array de tama�o MAX
    int aux1 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> val[i][0] >> val[i][1] >> val[i][2]; // lee tres valores en cada iteraci�n
        if(val[i][0] + val[i][1] + val[i][2] > 1)
        {
            aux1++;
        }
    }
    cout << aux1;
    return 0;
}
