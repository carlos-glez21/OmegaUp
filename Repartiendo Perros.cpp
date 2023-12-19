#include <iostream>

using namespace std;

int main(){
    // Declaracion de variables
    int Cachorros, Hijos, PerrosDonPoncho, Reparticion, totalPerros;
    const int Esposa = 1;
    // Lectura de datos
    cin >> Cachorros >> PerrosDonPoncho >> Hijos;

    // Proceso
    Reparticion = (Cachorros / (PerrosDonPoncho + Hijos + Esposa));

    totalPerros = (PerrosDonPoncho + Reparticion);

    // Salida
    cout << totalPerros << endl;



    return 0;
}
