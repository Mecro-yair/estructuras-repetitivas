#include <iostream>
using namespace std;
int main (){
	int n,num = 7,i;
	cout<<"Digite la cantidad de mutiplos de 7:"<<endl; cin>>n;
	if (n>0){
		for(i=1;i<=n;i++){
		cout<<"El multiplo "<<i<<" es: "<<num*i<<endl;
	    }
	}else{
		cout<<"ERROR3_NEGATIVE_VALUE";
	}
	return 0;
}
//"Si puedes imaginarlo,puedes programarlo"