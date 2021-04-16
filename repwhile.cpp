#include <iostream>
using namespace std;

/********************************
Ciclo de repetição: instrução while()
**********************************/



int main(int argc, char** argv) {
	
	//escrever uma linha de asteriscos
	//perguntar ao utilizador quantos quer escrever
	int total;
	int i;
	
	setlocale(LC_ALL, "");
	cout << "Nº de asteriscos = "; cin >> total;
	
	i = 0;
	while( i< total) { //enquanto a condição for verdade
	// repete as açôes que estão dentro do ciclo
	cout <<"*";
	i++; 
	}
	
	return 0;
}
