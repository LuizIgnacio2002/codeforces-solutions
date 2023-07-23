#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
int main()  
{
    string palabra;
    int casos_prueba, tamano;    
    cin >> casos_prueba;
    while(casos_prueba--)
	{
        int puntos[3];
        for(int i = 0 ; i < 3 ; i++) puntos[i] = 0;
        vector<string> palabras_jugador[3];
        map<string, int> diccionario;
        cin >> tamano;
        for(int i = 0 ; i < 3 ; i++)
		{
            for(int j = 0 ; j < tamano ; j++)
			{
                cin >> palabra;
                palabras_jugador[i].push_back(palabra);
                if(diccionario.find(palabra) == diccionario.end())
                    diccionario.insert(make_pair(palabra, 1));
                else
                    diccionario[palabra]++;
            }
        }

        for(int i = 0 ; i < 3 ; i++)
		{
            for(int j = 0 ; j < tamano ; j++)
			{
                switch(diccionario[palabras_jugador[i][j]])
				{
                    case 1:
                        puntos[i] += 3;
                        break;
                    case 2:
                        puntos[i] += 1;
                        break;
                }
            }
        }

        for(int i = 0 ; i < 3 ; i++) cout << puntos[i] << ' ';
        cout << endl;
    }
    return 0;
}
