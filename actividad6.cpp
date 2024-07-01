#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string jugadaComputadora() {
    switch(rand()%3+1) {
        case 1: 
			return "piedra";
        case 2: 
			return "papel";
        case 3: 
			return "tijeras";
    }
}

void ganador(string us, string comp, int &pu, int &pc) {
    if (us==comp) {
        cout<<"Esta ronda es un empate."<<endl;
        
    } else if ((us=="piedra" && comp=="tijeras")||(us=="papel" && comp=="piedra")||(us=="tijeras" && comp=="papel")) {
        cout<<"Usted gana esta ronda."<<endl;
        pu++;
        
    } else {
        cout<<"La computadora gana esta ronda."<<endl;
        pc++;
    }
}

int main() {
    srand(time(0));  
    
    int pu=0, pc=0;  
    
    cout<<"JUEGO DE PIEDRA, PAPEL Y TIJERAS" <<endl;
    cout<<"El juego acabara cuando alguien gane 3 rondas."<<endl;
    
    while(pu<3 && pc<3){
        string us;
        int opcion;
        
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"Ingrese su jugada (1. Piedra, 2. Papel, 3. Tijeras): "; cin>>opcion;
        
        switch(opcion){
            case 1: 
				us="piedra"; 
				break;
            case 2: 
				us="papel"; 
				break;
            case 3: 
				us="tijeras"; 
				break;
            default:
                cout<<"\nOpcion invalida. Intente de nuevo."<<endl;
                continue;
        }
        
        string comp=jugadaComputadora();
        
        cout<<"\nUsted eligio: "<<us<<endl;
        cout<<"La computadora eligio: "<<comp<<endl;
        
        ganador(us, comp, pu, pc);
        
        cout<<"\nPUNTAJE ACTUAL:"<<endl;
		cout<<"Usted: "<<pu<<" - Computadora: "<<pc<<endl;
    }
    
    if(pu>=3) {
    	cout<<"--------------------------------------------------------"<<endl;
        cout<<"USTED HA GANADO."<<endl;
	} else {
    	cout<<"--------------------------------------------------------"<<endl;
        cout<<"LA COMPUTADORA HA GANADO."<<endl;
  	}
    
    return 0;
}

