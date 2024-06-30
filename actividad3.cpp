#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float c1, c2, h;
	cout<<"Ingrese el primer cateto: ";
	cin>>c1;
	cout<<"Ingrese el segundo cateto: ";
	cin>>c2;
	
	h= sqrt(pow(c1, 2)+pow(c2, 2));
	
	cout<<"El valor de la hipotenusa es: "<<h<<endl;
	return 0;
}
