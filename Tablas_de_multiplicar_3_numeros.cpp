#include <iostream>

using namespace std;

int main(){
    // Datos conocidos y constantes
    int limite = 10;
    
    // Informacion de salida
    int numero1, numero2, numero3;

    // Datos no conocidos
    // No hay

    // Lectura de datos
    cin >> numero1 >> numero2 >> numero3;

    // Variables de trabajo 
    int i, x, y;

    // Proceso
    for(i = 1; i <= limite; i++){
        cout << numero1 << " X " << i << " = " << numero1 * i << endl;
    }
    for(x = 1; x <= limite; x++){
        cout << numero2 << " X " << x << " = " << numero2 * x << endl;
    }
    for(y = 1; y <= limite; y++){
        cout << numero3 << " X " << y << " = " << numero3 * y << endl;
    }

    return 0;
}
