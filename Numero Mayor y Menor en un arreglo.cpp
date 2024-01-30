#include <iostream>
using namespace std;

int main() {
    // Obtener el número mayor y menor de un arreglo
    int numero_elementos;

    // Pedimos el número de elementos del arreglo
    cout << "Proporciona el número de elementos del arreglo: ";
    cin >> numero_elementos;

    // Definimos el arreglo
    int arreglo[numero_elementos];

    // Pedimos los valores al usuario
    for (int i = 0; i < numero_elementos; i++) {
        cout << "Proporciona el valor " << i + 1 << " del arreglo: ";
        cin >> arreglo[i];
    }

    // Buscamos el valor mayor y menor
    // Lo inicializamos con los valores del índice cero
    int mayor = arreglo[0];
    int menor = arreglo[0];

    for (int i = 1; i < numero_elementos; i++) {
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        } else if (arreglo[i] < menor) {
            menor = arreglo[i];
        }
    }

    // Mostramos los resultados
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}
