#include <iostream>

using namespace std;

int main()
{
   // Datos conocidos y constantes
    char rectangulo = '*';
    // Informacion de salida
    // la misma de la constante
    // Datos no conocidos
    int filas, columnas;
    // Lectura de Datos
    cin >> filas;
    cin >> columnas;
    // Proceso
    // Bucle para filas
    for(int contador = 0; contador < filas; contador++){
        // Bucle para columnas
        for( int contador1 = 0; contador1 < columnas; contador1++){
           // Salida 
           cout << rectangulo;
        }
        // Salto de linea para cada fila
        cout << endl;
    }
    

    return 0;
}
