#include <iostream>
#include <cmath>
using namespace std;

void Raices(float a, float b, float c, float &x1, float &x2, bool &reales) {
    float d=pow(b, 2)-4*a*c;
    
    if(d>=0){
        if(d==0){
            x1=((-b)+sqrt(d))/(2*a);
            x2=x1;
            reales=true;
        } else {
	        x1=((-b)+sqrt(d))/(2*a);
	        x2=((-b)-sqrt(d))/(2*a);
            reales=true; 
        }
    } else {
    	x1=-b/(2*a);
    	x2=sqrt(-d)/(2*a);
        reales=false; 
    }
}

int main(){
    float a, b, c, x1, x2;
    bool reales;

    cout<<"Ingrese el coeficiente a: "; cin>>a;
    cout<<"Ingrese el coeficiente b: "; cin>>b;
    cout<<"Ingrese el coeficiente c: "; cin>>c;
    
    Raices(a, b, c, x1, x2, reales);
    
    if(reales){
        if(x1==x2)
            cout<<"La raiz doble es: "<<x1<<endl;
        else 
            cout<<"Las raices son: "<<x1<<" y "<<x2<<endl;
    } else 
        cout<<"Las raices complejas son: "<<x1<<"+"<<x2<<"i"<<" y "<<x1<<"-"<<x2<<"i"<<endl;
    
    return 0;
}

