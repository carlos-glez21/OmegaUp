#include <iostream>

using namespace std;

int main(){
    // Declaracion de variables y constantes
    const float Examen = 0.6;
    const float Asistencia = 0.2;
    const float Tareas = 0.2;

    // Declaracion de variables para alumnos
    int CalExamen, CalAsistencia, CalTarea, CalFinal;

    // Lectura de datos
    cin >> CalExamen >> CalAsistencia >> CalTarea;

    // Proceso
    CalFinal = (CalExamen * Examen) + (CalAsistencia * Asistencia) + (CalTarea * Tareas);

    cout << CalFinal << endl;

    return 0;
}
