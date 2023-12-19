/*La banda robatamales ha asestado un nuevo golpe y están por repartirse el delicioso botín. 
El líder de la banda se quedará con la mitad de los tamales (si el total es impar, también se quedará con el tamal sobrante)
 y los demás se repartirán de manera equitativa entre el resto de la banda. 
 Los tamales que no puedan repartirse equitativamente sin partirlos también se los quedará su líder. 
 ¿Cuántos tamales se comerá el líder de la banda? */

#include <iostream> 

using namespace std;

int main(){
    // Declaracion de variables
    int NumeroDeTamales, MiembrosDeLaBanda, resultado, lider, sobrante;

    // Lectura de datos
    cin >> NumeroDeTamales, 
    cin >> MiembrosDeLaBanda;

    // Proceso
    lider = (NumeroDeTamales / (MiembrosDeLaBanda - 1));

    sobrante = (NumeroDeTamales % MiembrosDeLaBanda);

    resultado = (lider + sobrante);

    // Salida
    cout << resultado << endl;

    return 0;
}
