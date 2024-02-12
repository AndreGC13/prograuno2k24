#include <iostream>
#include <cstdlib>
using namespace std;
//dEFINE DE CONSTANTES, ES DECIR, no puede ser cambiada
#define MAXIMA_CALIFICACION 100
#define MINIMA_CALIFICACION 0
int main()
{
    int minimo = MINIMA_CALIFICACION;
    int maximo = MAXIMA_CALIFICACION;
    int aleatorio = 0;
    aleatorio = minimo + rand()/(RAND_MAX/(maximo-minimo+1)+1);
    cout << "Número Aleatorio calculado" <<aleatorio<< endl;
    return 0;
}
