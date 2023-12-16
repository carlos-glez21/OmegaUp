#include <iostream>

using namespace std;

int main()
{
    // Declaramos variables
    int mayor, menor, residuo, mcd;
    
    // Lectura de datos
    cin >> mayor >> menor;
    
    // Proceso
    do{
        residuo = (mayor % menor);
        
        if(residuo > 0){
            mayor = menor;
            menor = residuo;
        }
        
    }while(residuo != 0);
    
    // Salida
    cout << menor << endl;
    
    return 0;
}
