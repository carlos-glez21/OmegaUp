#include <iostream>

using namespace std;

int main()
{
    // Declaramos variables
    int n, a, b;
    
    // Lectura de datos
    cin >> n;
    cin >> a;
    cin >> b;
    
    // Proceso
    while(n < 1000){
        if(n % 2 == 0){
            n = n + (a*(a + 1)) / 2;
        }else{
            n = n + (b*(b + 1)) / 2;
        }
    }
    
    // Salida 
    cout << n << endl;

    return 0;
}
