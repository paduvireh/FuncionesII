#include <iostream>
#include <cmath>

using namespace std;

float Hipotenusa(float cat1, float cat2){
	return sqrt(pow(cat1, 2)+pow(cat2, 2));
}

int main(){
	float c1, c2, h;
	do{
		cout<<"Ingrese el primer cateto: ";
		cin>>c1;
		cout<<"Ingrese el segundo cateto: ";
		cin>>c2;
		if(c1<=0||c2<=0)
			cout<<"\nLos catetos no pueden ser negativos.\n\n";		
			
	} while(c1<=0||c2<=0);
	
	h= Hipotenusa(c1, c2);
	
	cout<<"El valor de la hipotenusa es: "<<h<<endl;
	return 0;
}
