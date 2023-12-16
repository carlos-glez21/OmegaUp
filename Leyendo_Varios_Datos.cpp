#include <iostream>

using namespace std;

int main()
{
    // Variavbles y constantes
    int suma;
    int totalParejas, numero1 , numero2;
    int contador;
    // lectura
    cin >> totalParejas;
    contador = 1;
    while(contador<=totalParejas){
        cin >> numero1 >> numero2;
        suma = numero1 + numero2;
        cout << suma << endl;
        contador++;
        
    }

    return 0;
}
