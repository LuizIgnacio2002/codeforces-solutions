#include <iostream>
#include <vector>
using namespace std;
typedef long long int bigint;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n; // values of Tsondu's monsters.
        int m;
        cin >> m; // values of Tenzing's monsters.
        //vector<int> Tsondu;
        bigint suma_a = 0;
        bigint suma_b = 0;
        //vector<int> Tenzing;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            //Tsondu.push_back(a);
            suma_a += a;
        }

        for (int k = 0; k < m; k++)
        {
            int b;
            cin >> b;
            //Tenzing.push_back(b);
            suma_b += b;
        }

        if (suma_a == suma_b)
            cout << "Draw";
        else if (suma_a > suma_b)
            cout << "Tsondu";
        else
            cout << "Tenzing";

        cout << endl;
    }

    return 0;
}

