#include <iostream>
using namespace std;

/********************************
Ciclo de repeti��o: instru��o while()
**********************************/



int main(int argc, char** argv) {
	
	//escrever uma linha de asteriscos
	//perguntar ao utilizador quantos quer escrever
	int total;
	int i;
	
	setlocale(LC_ALL, "");
	cout << "N� de asteriscos = "; cin >> total;
	
	i = 0;
	while( i< total) { //enquanto a condi��o for verdade
	// repete as a��es que est�o dentro do ciclo
	cout <<"*";
	i++; 
	}
	
	return 0;
}
