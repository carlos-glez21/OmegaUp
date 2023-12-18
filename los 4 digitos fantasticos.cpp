/*Sabemos que dado un número N, al hacer N % 10 obtenemos su ultimo digito
pues es el residuo de dividir entre 10, ahora si hacemos N % 100 obtenemos los 
ultimos dos digitos de N.
Escribe un programa que dado un numero de 5 digitos (sin ceros a la izquierda),
imprima sus ultimos cuatro digitos.*/


#include <iostream> 

using namespace std;

int main(){
    // Declaracion de variables
    int numero, residuo;

    // Lectura de datos
    cin >> numero;

    // Proceso
    residuo = (numero % 10000);

    // Salida
    cout << residuo << endl;

    return 0;
}
