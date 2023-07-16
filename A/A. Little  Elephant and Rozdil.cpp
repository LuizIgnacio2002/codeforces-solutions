#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
const long long MAX_VALUE = 9223372036854775807LL;
bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    long long min=MAX_VALUE;
    int rpta=0;
    std::cin >> n;
    std::map<int, int> mapa;
    for (int i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        mapa[i + 1] = value;
    }

    //std::cout << "Mapa antes del ordenamiento:" << std::endl;
    for (const auto& pair : mapa) {
       // std::cout << "Clave: " << pair.first << ", Valor: " << pair.second << std::endl;
    }

    // Copiar los pares clave-valor del mapa a un vector
    std::vector<std::pair<int, int>> vectorMap(mapa.begin(), mapa.end());

    // Ordenar el vector utilizando la función de comparación personalizada
    std::sort(vectorMap.begin(), vectorMap.end(), compare);

   // std::cout << "Mapa después del ordenamiento:" << std::endl;
    for (const auto& pair : vectorMap) {
        //std::cout << "Clave: " << pair.first << ", Valor: " << pair.second << std::endl;
        if(pair.second<min)
        {
        	min=pair.second;
        	rpta=pair.first;
		}
		else if(pair.second==min)
		{
			std::cout<<"Still Rozdil"; return 0;
		}
    }
    std::cout<<rpta;

    return 0;
}

