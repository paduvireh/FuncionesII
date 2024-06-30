#include <iostream>
#include <cmath>

using namespace std;

float Hipotenusa(float cat1, float cat2){
	return sqrt(pow(cat1, 2)+pow(cat2, 2));
}

int main(){
	float c1, c2, h;
	cout<<"Ingrese el primer cateto: ";
	cin>>c1;
	cout<<"Ingrese el segundo cateto: ";
	cin>>c2;
	
	h= Hipotenusa(c1, c2);
	
	cout<<"El valor de la hipotenusa es: "<<h<<endl;
	return 0;
}
