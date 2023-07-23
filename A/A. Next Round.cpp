#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int participante[50];
    for (int i = 0; i < n; i++) {
        cin >> participante[i];
    }
    int puntaje_finalista = participante[k-1];
    int num_participantes_avanzan = 0;
    for (int i = 0; i < n; i++) {
        if (participante[i] >= puntaje_finalista && participante[i] > 0) {
            num_participantes_avanzan++;
        }
    }
    cout << num_participantes_avanzan << endl;
    return 0;
}
 
