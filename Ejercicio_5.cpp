#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    string respuesta="si"; // Inicializa respuesta a 'S'
    float nota, promedio,suma = 0,contador = 0;

    int aprobados = 0;
    int desaprobados = 0;
    while (respuesta =="si" || respuesta=="Si"|| respuesta=="SI" || respuesta=="sI") { 
        cout << "Digite la nota: \n";cin >> nota;
        if (nota>0){
        	suma += nota;
        contador++;
        if (nota > 10.5 && nota<=20) {
            aprobados++;
        } else {
            desaprobados++;
        }
        cout << "¿Continuar? (si/no): \n";
        cin >> respuesta;
        }else{
        	cout<<"Digite un numero positivo\n";
		}
    }
        

    promedio = suma / contador; 
    
    cout << "Los aprobados son: " << aprobados << endl;
    cout << "Los desaprobados son: " << desaprobados << endl;
    cout << "El promedio de las notas del salón es: " << promedio << endl;
    getch();
    return 0;
}
//"Si puedes imaginarlo,puedes programarlo"