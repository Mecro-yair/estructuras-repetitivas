#include<iostream>
using namespace std;
int main(){
	int contador=0,n,num,i;
	float promedio,suma=0;
	cout<<"Digite la cantidad de numeros no negativos a sacar el promedio: "; cin>>n;
	if (n>0){
		for (i=1;i<=n;i++){
		        cout<<"Digite un numero: "; cin>>num;
		        if (num>0){
		        	suma=suma+num;
				}else{
					cout<<"Digite un numero positivo";
				}
	    }
	    if(num>0){
	    	promedio = suma/n;
	        cout<<"el promedio de los numeros no negativos es: "<<promedio;
		}
	}else{
		cout<<"Digite un numero positivo";
	
	}	
	return 0;
}
//"Si puedes imaginarlo,puedes programarlo"