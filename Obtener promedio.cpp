#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Datos conocidos y constantes
    // No hay
    // Informacion de salida
    float promedio;
    // Datos no conocidos
    int numeroAlumnos;
    float calificacion;
    // Variables de trabajo 
    int contador;
    float suma = 0;
    // Lectura de Datos
    cin >> numeroAlumnos;
    // Proceso
    for(contador = 1; contador <= numeroAlumnos; contador++){
        cin >> calificacion;
        suma = suma + calificacion;
    }
    // Calcular promedio
    promedio = suma / numeroAlumnos;
    
    // Salida 
    cout << setprecision(2) << fixed << promedio << endl;
   

    return 0;
}
