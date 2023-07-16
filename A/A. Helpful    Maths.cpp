#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ntimesone = 0, ntimestwo = 0, ntimesthree = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            ntimesone++;
        if (s[i] == '2')
            ntimestwo++;
        if (s[i] == '3')
            ntimesthree++;
    }
    if (s.size() == 1)
    {
        if (ntimesone == 1)
            cout << "1";
        if (ntimestwo == 1)
            cout << "2";
        if (ntimesthree == 1)
            cout << "3";
    }
    else if (ntimesone == 1 && ntimestwo == 1 && ntimesthree == 1)
        cout << "1+2+3";
    else if (ntimesone == 1 && ntimestwo == 1)
        cout << "1+2";
    else if (ntimesone == 1 && ntimesthree == 1)
        cout << "1+3";
    else if (ntimestwo == 1 && ntimesthree == 1)
        cout << "2+3";
    else
    {
        for (int i = 0; i < ntimesone; i++)
        {
            if (i < ntimesone - 1)
                cout << "1+";
            else if (i == ntimesone - 1)
                cout << "1";
        }
        // Agregamos la verificación de si ntimestwo es cero
        if (ntimestwo == 1)
            cout << "+2";
        else if (ntimestwo > 1)
        {
            cout << "+";
            for (int i = 0; i < ntimestwo; i++)
            {
                if (i < ntimestwo - 1)
                    cout << "2+";
                else if (i == ntimestwo - 1)
                    cout << "2";
            }
        }
        // Agregamos la verificación de si ntimesthree es cero
        if (ntimesthree == 1)
            cout << "+3";
        else if (ntimesthree > 1)
        {
            cout << "+";
            for (int i = 0; i < ntimesthree; i++)
            {
                if (i < ntimesthree - 1)
                    cout << "3+";
                else if (i == ntimesthree - 1)
                    cout << "3";
            }
        }
    }
    return 0;
}

