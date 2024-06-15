#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite el n primeros numeros naturales a sumar : "; cin >> n;
    
    int suma = 0;
    if (n>0){
    	for (int i = 1; i <= n; ++i) {
            suma =suma + i;
        }
        cout  << suma;
	}else{
		cout<<"TYPING_ERROR4";
	}
    return 0;
}
//"Si puedes imaginarlo,puedes programarlo"
