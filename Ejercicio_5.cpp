#include <iostream>
using namespace std;

int main() {
    char respuesta = 'S'; // Inicializa respuesta a 'S'
    float nota, promedio,suma = 0,contador = 0;

    int aprobados = 0;
    int desaprobados = 0;

    while (respuesta !='N') { 
        cout << "Digite la nota: ";
        cin >> nota;
        suma += nota;
        contador++;
        if (nota > 10.5) {
            aprobados++;
        } else {
            desaprobados++;
        }
        cout << "¿Continuar? (S/N): ";
        cin >> respuesta;
    }

    promedio = suma / contador; 
    cout << "Los aprobados son: " << aprobados << endl;
    cout << "Los desaprobados son: " << desaprobados << endl;
    cout << "El promedio de las notas del salón es: " << promedio << endl;

    return 0;
}
//"Si puedes imaginarlo,puedes programarlo"