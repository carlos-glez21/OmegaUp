#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //constantes y variables
    //datos conocidos
    //informacian de salida
    int Minimo,Maximo;
    float Promedio;
    //datos no conocidos
    int Numero,TotalElementos;
    int NumeroLista;
    //variable de trabajo
    float Suma;
    cin>>NumeroLista;
    for(int ContadorLista=1;ContadorLista<=NumeroLista;ContadorLista++){
    //lectura
    cin>>TotalElementos;
    Suma=0;
    Maximo=0;
    Minimo=1000;
    for(int ContadorElementos=1;ContadorElementos<=TotalElementos;ContadorElementos++){
        cin>>Numero;
        Suma=Suma + Numero;
        if(Numero>Maximo){
            Maximo=Numero;
        }
        if(Numero<Minimo){
            Minimo=Numero;
        }
        
    }
    Promedio=Suma/TotalElementos;
    if(Promedio-(int)Promedio){
        cout<<setprecision(3)<<fixed;
        cout<<Promedio<<" "<<Minimo<<" "<<Maximo;
        cout<<setprecision(0)<<fixed;
        
    }
    else{
        cout<<Promedio<<" "<<Minimo<<" "<<Maximo;
    }
    cout<<endl;
    }
    

    return 0;
}
