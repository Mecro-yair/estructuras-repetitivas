/*Diseñar un algoritmo que permita leer “n” números por el teclado. El programa debe
calcular el promedio de los números pares y el promedio de los números impares.*/
#include <iostream>
using namespace std;
int main(){
	//n:cantidad de numero
	int n,conp=0,coni=0,sumap=0,sumai=0,num ,promediop,promedioi;
	cout<<"Digite la cantidad de numeros a calcular el promedio: "; cin>>n;
	
	for (int i=1;i<=n;i++){
		cout<<"Digite un numero: "; cin>>num;
		if (num%2==0){
			conp++;
			sumap=sumap+num;
		}else{
			coni++;
			sumai=sumai+num;
		}
	}
	promediop=sumap/conp;
	promedioi=sumai/coni;
	cout<<"El promedio de numeros pares es: "<<promediop<<endl;
	cout<<"El promedio de numeros impares es: "<<promedioi;
	return 0;
}
//"Si puedes imaginarlo,puedes programarlo"