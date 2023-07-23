#include <iostream>
#define N 100

using namespace std;

int main()
{
    int n;
    cin >> n;

    int val[3][N];
    int sum[3] = {0};  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> val[j][i];
            sum[j] += val[j][i];
        }
    }

    if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
 
