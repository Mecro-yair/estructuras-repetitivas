#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string respuesta="si";
	int suma = 0,n;
	while (respuesta=="SI" || respuesta=="si" || respuesta=="s"){
		cout<<"Digite el gasto(positivo): \n"; cin>>n;
		if (n>0){
		    suma = suma+n;
		}
		cout<<"¿Continuar?(si/no): \n"; cin>>respuesta;
	}
	cout<<"La suma de gastos es: \n"<<suma;
	return 0;
}
//"Si puedes imaginarlo,puedes programarlo"