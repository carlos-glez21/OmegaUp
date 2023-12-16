#include <iostream>

using namespace std;

int main()
{
    // Constantes y variables
    int suma; 
    int numero;
    suma = 0;
    // Proceso
    do{
        cin >> numero;
        suma = suma + numero;
    }while(numero != 0);
    
    // Salida 
    cout << suma;
  
    return 0;
}
