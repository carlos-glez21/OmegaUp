#include <iostream>
using namespace std;
int main()
{
    //Información de salida
    int Suma;
    //Datos conocidos
    const int TotalNumeros=3;
    //Datos no conocidos
    int NumeroCasos, Numero;
    //Variables de trabajo
    int ContadorCasos, ContadorNumeros;
    //Lectura de Datos
    cin>>NumeroCasos;
    //Proceso
    for(ContadorCasos=1;ContadorCasos<=NumeroCasos;ContadorCasos++)
    {
        Suma=0;
        for(ContadorNumeros=1;ContadorNumeros<=TotalNumeros;ContadorNumeros++)
        {
            cin>>Numero;
            Suma=Suma+Numero;
        }
        cout<<Suma<<endl;
    }
    return 0;
}
