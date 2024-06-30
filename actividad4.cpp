#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a, b, c, d, x1, x2;
	cout<<"Ingrese el coeficiente a: "; cin>>a;
	cout<<"Ingrese el coeficiente b: "; cin>>b;
	cout<<"Ingrese el coeficiente c: "; cin>>c;
	
	d=pow(b, 2)-4*a*c;
	
    if(d>=0){
        x1=((-1*b)+sqrt(d))/(2*a);
        x2=((-1*b)-sqrt(d))/(2*a);
        cout<<"Las raices son: "<<x1<<" y "<<x2<<endl;
    } else
		cout<<"No posee raices reales."<<endl;            
    return 0;
}
