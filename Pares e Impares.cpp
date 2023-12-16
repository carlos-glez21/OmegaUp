#include <iostream>

using namespace std;

int main()
{
    // Declaramos constantes y variables
    int secuenciaNumeros;
    int numero;
    
    // Variables de control
    int contadorPar = 0;
    int contadorImpar = 0;
    int contador = 0;
    
    // Lectura ¿cuantas numeros queremos ingresar?
    cin >> secuenciaNumeros;
    
    // Proceso
    while(contador < secuenciaNumeros){
        cin >> numero;
        contador = contador + 1;
        // Hacemos la condicion para par e impar 
        if(numero % 2 == 0){
            contadorPar = contadorPar + 1;
        }else{
            contadorImpar = contadorImpar + 1;
        }
    }
    
    // Salida
    cout << contadorPar << " " << contadorImpar << endl;

    return 0;
}
