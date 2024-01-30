#include <iostream>

using namespace std;

int main()
{
    // Definicion de variables
    int numero_elementos;
    int contador_positivo = 0;
    int contador_negativo = 0;
    int contador_neutro = 0;
    
    // Solicitud de datos al usuario
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> numero_elementos;
    
    // Declaramos el arreglo 
    int numero[numero_elementos];
    
    // Pedimos los valores a ingresar al arreglo
    for(int i = 0; i < numero_elementos; i++){
        cout << "Ingresa el valor " << i + 1 << " del arreglo: ";
        cin >> numero[i];
        if(numero[i] > 0){
            contador_positivo = contador_positivo + 1;
        }else if(numero[i] < 0){
            contador_negativo = contador_negativo + 1;
        }else{
            contador_neutro = contador_neutro + 1;
        }
    }
    cout << endl;
    // Salida 
    cout << "Positivos: " << contador_positivo << endl;
    cout << "Negativos: " << contador_negativo << endl;
    cout << "Neutros: " << contador_neutro << endl;

    return 0;
}
