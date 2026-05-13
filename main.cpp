#include <iostream>
#include "motores.h"
#include "sensor.h"
#include "showlib.h"
using namespace std;

int main(int argc, char** argv) {
	rotacao_horaria(120,10);
	rotacao_antihoraria(60,30);
	parar();

	int umidade = get_umidade();
	int temp = get_temperatura();
	
	showTempUmidade(temp, umidade);
	
	umidade = get_umidade();
	temp = get_temperatura();
	
	showTempUmidade(temp, umidade);

	return 0;
}