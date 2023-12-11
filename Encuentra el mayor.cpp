#include <iostream>

using namespace std;

int main()
{
    // Datos conocidos y constantes
    // No hay
    // Informacion de salida
    int Maximo;

    // Datos no conocidos
    int Numeros;
    int NumerosIng;

    // Variables de trabajo 
    int Contador;
    Maximo = 0;

    // Lectura de Datos
    cin >> Numeros;

    // Proceso
    for(Contador = 0; Contador < Numeros; Contador++){
        cin >> NumerosIng;
        if(NumerosIng > Maximo){
            Maximo = NumerosIng;
        }
    }
    // Salida 
    cout << Maximo << endl; 

    return 0;
}
