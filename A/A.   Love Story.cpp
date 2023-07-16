#include<iostream>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    string s = "codeforces";
    const int MAX_LEN = 100; 
    string eval; 
    for(int i = 0; i < t; i++)
    {
        cin >> eval;
        int aux = 0;
        for(int j = 0; j < 10; j++)
        {
            if(s[j] != eval[j]) 
                aux++;
        }
        cout << aux << endl;
    }

    return 0;
}

