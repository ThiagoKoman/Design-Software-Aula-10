#include <iostream>


using namespace std;

void rotacao_horaria(int rpm, int segundos){
	cout << "Motor RPM: " << rpm << endl;
	cout << "Segundos: " << segundos << endl;
	cout << endl;
}

void rotacao_antihoraria(int rpm, int segundos){
	cout << "Motor RPM: -" << rpm << endl;
	cout << "Segundos: " << segundos << endl;
	cout << endl;
}

void parar(){
	cout << "Motor Parando" << endl;
	cout << endl;
}
