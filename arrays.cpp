#include <iostream>
#include<iomanip>
using namespace std;

/******************************************* 
Criar um array para as seis notas de um anulo
1 - pediros valores e escrever-los no array
2-  listar o conteudo do array
********************************/

int main(int argc, char** argv) {
	int nota [6]; // criar um array com 6 posições
	
	cout << "escreva as 6 notas do aluno\n";


	//ler as 6 notas
	for( int i= 0; i<6; i++ ){
		cin >> nota [i];
}
	
	// escrever os 6 valores
	cout << "\nas notas lidas foram :\n";
		for(int i=0; i<6 ; i++){
			cout << "nota" << i+1 << ":" << setw(3) << nota [i]<< endl;
		}
		
		

				
	return 0;
}
