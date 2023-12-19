#include <iostream>

using namespace std;

int main(){
    // Declaracion del tiempo
    const int SegundosPorHora = (60 * 60);
    const int SegundosPorMinuto = 60;

    // Declaracion de variables
    int Segundos, Horas, Minutos;

    // Lectura de datos
    cin >> Segundos;

    // Proceso
    // Horas
    Horas = (Segundos / SegundosPorHora);
    Segundos = (Segundos % SegundosPorHora); // De la division necesitamos el residuo para hacer los minutos 
    // Minutos
    Minutos = (Segundos / SegundosPorMinuto);
    // Segundos
    Segundos = (Segundos % SegundosPorMinuto); // Aqui se hace la operacion para los segundos que sobran
    
    // Salida
    cout << "HORAS: " << Horas << " " << "MINUTOS: " << Minutos << " " << "SEGUNDOS: " << Segundos << endl;

    return 0;
}
