#include <iostream>


using namespace std;

void rotacao_horaria(int rpm, int segundos){
	cout << "RPM: " << rpm << endl;
	cout << "Segundos: " << segundos << endl;
	cout << endl;
}

void rotacao_antihoraria(int rpm, int segundos){
	cout << "RPM: -" << rpm << endl;
	cout << "Segundos: " << segundos << endl;
	cout << endl;
}

void parar(){
	cout << "Parando" << endl;
	cout << endl;
}