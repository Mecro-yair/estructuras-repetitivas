#include <iostream>
using namespace std;
int main() {
    int num;
	string stringnum;
    cout << "Digite un numero : "; cin >> num;
    
    stringnum=to_string(num);
    
        if (stringnum=="0"){
	  	cout<<"ERROR2_STRING_INVALID";
	  	return 0;
	    }   
    while (num >= 0) {
        cout << "Introduce otro numero: "<<endl;
        cin >> num;
        stringnum=to_string(num);
        if (stringnum=="0"){
	  	cout<<"ERROR2_STRING_INVALID";
	  	return 0;
	    }   
    }
    cout << "ERROR3_NEGATIVE_VALUE";
    return 0;
}
//"Si puedes imaginarlo,puedes programarlo"