/*En un planeta muy extraño, los minutos son de 50 segundos, las horas de 70 minutos y los días de 12 horas. 
Ya que planeas ir de vacaciones a ese planeta,te gustaría tener un reloj que dado un número de segundos 'S' 
te despliegue el número de días, horas, minutos y segundos de ese planeta. Por ejemplo, para S = 3553
han transcurrido 0 dias, 1 hora, 1 minuto y 3 segundos. Escribe un programa para que tu reloj funcione correctamente*/

#include <iostream>

using namespace std;

int main() {
   // Definicion del tiempo
   const int SegundosPorDia = (12 * 70 * 50);
   const int SegundosPorHora = (70 * 50);
   const int SegundosPorMinuto = 50;

   // Definicion de variables
   int dia, horas, minutos, segundos;

   // Lectura de datos
   cin >> segundos;

   // Proceso de Horas Minutos y Segundos  
   dia = (segundos / SegundosPorDia);
   segundos = (segundos % SegundosPorDia);

   horas = (segundos / SegundosPorHora);
   segundos = (segundos % SegundosPorHora);

   minutos = (segundos / SegundosPorMinuto);
   segundos = (segundos % SegundosPorMinuto);

   // Salida
    cout << dia << " " << horas << " " << minutos << " " << segundos << endl;


    return 0;
}
