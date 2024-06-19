#include<iostream>
using namespace std;
int main(){
	int contador=0,n,num,i;
	float promedio,suma=0;
	cout<<"Digite la cantidad de numeros no negativos a sacar el promedio:\n"; cin>>n;
	if (n>0){
		while(i<n){
		        cout<<"Digite un numero: "; cin>>num;
		        if (num>0){
		        	suma=suma+num;
		        	i++;
				}else{
					cout<<"Digite un numero positivo\n";
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