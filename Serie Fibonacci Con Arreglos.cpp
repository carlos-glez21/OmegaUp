#include <iostream>

using namespace std;

int main()
{
   // Declaracion de variables
   int numero_elementos;
   int valor1 = 0;
   int valor2 = 1;
   int valor_serie;

   // Bucle para numeros positivos
   do{
       cout << "Introudce un numero Positivo: ";
       cin >> numero_elementos;
       if(numero_elementos <= 0){
           cout << "Error, introduce un numero Positivo." << endl;
       }
   }while(numero_elementos <= 0);

   // Imprimimos la serie fibonacci
   for(valor_serie = 0; valor_serie < numero_elementos; valor_serie++){
       valor_serie = valor1 + valor2;
       valor1 = valor2;
       valor2 = valor_serie;
       cout << "El valor del elemento es: " << valor_serie << endl;
   }

    return 0;
}
