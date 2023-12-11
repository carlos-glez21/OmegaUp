#include <iostream>

using namespace std;

int main() {
    // Datos conocidos y constantes
    const char caracter = '@';

    // Datos no conocidos
    int base;

    // Variables de trabajo
    int i;
    int x;

    // Lectura de Datos
    cin >> base;

    // Proceso
    for (i = 1; i <= (base + 1) / 2; i++) {
        // Imprimir espacios para centrar
        for (x = 1; x <= (base - 1) / 2 - i + 1; x++) {
            cout << " ";
        }
        // Imprimir arrobas
        for (x = 1; x <= 2 * i - 1; x++) {
            cout << caracter;
        }

        cout << endl;
    }

    return 0;
}
