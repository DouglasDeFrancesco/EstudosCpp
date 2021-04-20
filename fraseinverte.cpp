#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;





int main(int argc, char** argv) {
	
	// declarar variável
	char frase[50];
	int tamanho; //tamanho da frase lida
	
	// ler a frase
	cout << "frase lida: ";
	cin.getline(frase, 50);
	
	 //tamanho da frase lida
	 tamanho = strlen(frase);
	 cout << endl<< "tamanho: " << tamanho << endl; 
	
	//inverter a frase lida
	cout << "frase invertida: ";
	for(int i=tamanho-1; i>=0; i--){
		cout << frase[i]; 
	}
		
	cout << endl;
	system("pause");
	
	
	return 0;
}
