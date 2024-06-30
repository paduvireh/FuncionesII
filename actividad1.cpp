#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float r, A;
	cout<<"Introduce el valor del radio: ";
	cin>>r;
	
	A=M_PI*pow(r, 2);
	cout<<"El area del circulo es: "<<A<<endl;
	
	return 0;
}
