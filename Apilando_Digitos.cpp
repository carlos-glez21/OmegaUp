#include <iostream>

using namespace std;

int main(){
    // Declaracion de variables
    int numero = 1;
    int numeroEntrada, productoSuma = 0;
    int contador, contadorCiclo;
    // Lectura de datos
    cin >> numeroEntrada;
    // Proceso
    for(contadorCiclo = 1; contadorCiclo <= numeroEntrada; contadorCiclo++){
        for(contador = 1; contador <= numero; contador++){
            cout << numero;
        }
        cout << endl;
        numero = numero + 1;
    }
    numeroEntrada = numeroEntrada - 1;
    numero = numeroEntrada;
    for(contadorCiclo = 1; contadorCiclo <= numeroEntrada; contadorCiclo++){
        for(contador = 1; contador <= numero; contador++){
            cout << numero;
        }
        cout << endl;
        numero = numero - 1;
    }

    return 0;
}
