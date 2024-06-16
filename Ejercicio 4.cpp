#include <iostream>
using namespace std;
int main(){
	char respuesta;
	int suma = 0,n;
	while (respuesta!='N'){
		cout<<"Digite el gasto: "; cin>>n;
		suma = suma+n;
		cout<<"¿Continuar?(S/N): "; cin>>respuesta;
	}
	cout<<"La suma de gastos es: "<<suma;
	return 0;
}
//"Si puedes imaginarlo,puedes programarlo"