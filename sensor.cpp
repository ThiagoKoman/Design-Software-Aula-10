#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int get_temperatura(){
	srand(time(nullptr)); 
    int random_num = rand() % 40; 
    return random_num;
}

int get_umidade(){
	srand(time(nullptr)); 
    int random_num = rand() % 100; 
    return random_num;
}
