#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> puntos;
    for (int i = 0; i < n; i++) 
	{
        int x, y;
        cin >> x >> y;
        puntos.push_back({x, y});
    }

    int cantidadSupercentrales = 0;
    for (int i = 0; i < n; i++) 
	{
        int x = puntos[i][0];
        int y = puntos[i][1];
        bool tieneSuperior = false, tieneInferior = false, tieneIzquierdo = false, tieneDerecho = false;

        for (int j = 0; j < n; j++) 
		{
            if (i == j) continue;

            int x_actual = puntos[j][0];
            int y_actual = puntos[j][1];

            if (x_actual == x) 
			{
                if (y_actual < y) tieneInferior = true;
                if (y_actual > y) tieneSuperior = true;
            }
            if (y_actual == y) 
			{
                if (x_actual < x) tieneIzquierdo = true;
                if (x_actual > x) tieneDerecho = true;
            }
        }

        if (tieneSuperior && tieneInferior && tieneIzquierdo && tieneDerecho) 
		{
            cantidadSupercentrales++;
        }
    }

    cout << cantidadSupercentrales << endl;

    return 0;
}

