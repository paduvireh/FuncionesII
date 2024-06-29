#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
	int a, b;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	
	cout<<"Suma: "<<suma(a, b)<<endl;
	cout<<"Resta: "<<resta(a, b)<<endl;
	return 0;
}
