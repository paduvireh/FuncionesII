#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	
	int n, max;
	cout<<"Introduce la cantidad de numeros aleatorios: ";
	cin>>n;
	cout<<"Introduce el maximo valor que deseas generar: ";
	cin>>max;
	
	for (int i=0; i<n; i++){
		int numeromagico= rand()%max+1;
		cout<<numeromagico<<endl;
	}
	return 0;
}
