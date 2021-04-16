#include <iostream>
using namespace std;

/*********************************
Ciclo de repetição : instyrução do.... while()
*********************************/

int main(int argc, char** argv) {
	//escrever uma linha de asteriscos
	// perguntar ao utilizador quantos quer escrever
	int total;
	int i;
	
	setlocale(LC_ALL,"");
	cout << "Nº de asteriscos ="; cin >> total;
	
	i=0;
	do{
		cout <<"*";
		i++;
		
	}while( i< total);
	
	
	
	
	return 0;
}
