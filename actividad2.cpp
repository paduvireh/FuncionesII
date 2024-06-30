#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void NumerosAleatorios(int cantidad, int maximo){
	for (int i=0; i<cantidad; i++){
		int numeromagico= rand()%maximo+1;
		cout<<numeromagico<<endl;
	}
}

int main(){
	srand(time(0));
	
	int n, max;
	cout<<"Introduce la cantidad de numeros aleatorios: ";
	cin>>n;
	cout<<"Introduce el maximo valor que deseas generar: ";
	cin>>max;
	
	NumerosAleatorios(n, max);
	return 0;
}
