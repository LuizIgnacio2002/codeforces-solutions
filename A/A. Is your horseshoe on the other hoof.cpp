#include <iostream>
#include <algorithm>

int main() {
    int colores[4];
    for (int i = 0; i < 4; i++) {
        std::cin >> colores[i];
    }

    std::sort(colores, colores + 4);

    int min_herraduras_a_comprar = 0;
    for (int i = 1; i < 4; i++) {
        if (colores[i] == colores[i - 1]) {
            min_herraduras_a_comprar++;
        }
    }

    std::cout << min_herraduras_a_comprar << std::endl;

    return 0;
}

