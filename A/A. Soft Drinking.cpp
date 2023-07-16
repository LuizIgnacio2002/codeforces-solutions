#include<iostream>
// n	numero de amigos
// k	numero de botelas
// l	numero de ml de cada botella
//c 	numero de limones
// d	nuermo de partes que se cortó el limon
// p	numero de gramos de sal
// nl	numero de ml por bebida
// np 	gramos de sal
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ml_por_amigo = k * l / nl;
    int parte_por_amigo = c * d;
    int sal_por_amigo = p / np;

    int max_tostada = min(ml_por_amigo, min(parte_por_amigo, sal_por_amigo)) / n;

    cout << max_tostada;

    return 0;
}

