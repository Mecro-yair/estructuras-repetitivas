#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Digite un numero : "; cin >> num;
    while (num >= 0) {
        cout << "Introduce otro numero  "<<endl;
        cin >> num;
    }
    cout << "Se acabo,Haz digitado un numero negativo";

    return 0;
}
//"Si puedes imaginarlo,puedes programarlo"