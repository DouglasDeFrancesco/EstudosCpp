#include <iostream>
using namespace std;

/**************************************
Ciclo de reperição: Instrução for(for)
**************************************/




int main(int argc, char** argv) {
	//escrever uma linha de asteriscos
	// perguntar ao utilizador quantos quer escrever
	int total;
		
	
	setlocale(LC_ALL, "");
	cout << "Nº de asteriscos ="; cin >> total;
	
	for (int i=0 ; i < total; i++){
		cout << "*";
		
	}	return 0;
	
	
/*
==[regras práticas para saber o nº de repetições] ==

for(int i=0; i<4; i++
nº de vezes -> 4-0-> 4 vezes

for(int i=

