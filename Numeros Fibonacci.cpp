#include <iostream>

using namespace std;

int main()
{
    // Declaracion de variables
    int valor1 = 1;
    int valor2 = 1;
    int valorSerie;
    int tope = 30;
    cout << "Valor Serie: " << valor1 << endl;
    cout << "Valor Serie: " << valor2 << endl;
    
    // Proceso
    for(valorSerie = 0; valorSerie < tope; valorSerie ++){
        valorSerie = valor1 + valor2;
        // Cambiamos el valor de las variables para que no sea un bucle infinito
        valor1 = valor2;
        valor2 = valorSerie; 
        // Salida
        cout <<"Valor Serie: " << valorSerie << endl;
    }
  
    return 0;
}
