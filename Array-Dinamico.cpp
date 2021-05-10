/**************************************************************************
 Este exemplo mostra como se cria uma array durante a execução do programa
 Note-se que, quando se está a escrever o programa, não se sabe qual vai
 ser a dimensão para o array.
 É este o interesse das variáveis dinâmicas (criadas em runtime)
**************************************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int tot; // número de elementos para o array
	int *pNum, *pAux;
	
	setlocale(LC_ALL,"");
	cout << "Total de números: "; cin >> tot;
	
	// alocação de memória para o array de números
	pNum = (int *) malloc( tot * sizeof(int) );
	
	// testar se conseguiu alocar
	if(!pNum){
		cout << "Memória insuficiente\n";
		return 8; //ERROR_NOT_ENOUGH_MEMORY
	}
	
	// não perder a referência para o início do array
	pAux = pNum;

	// ler valores para o array
	for(int i=0; i<tot; i++){
		cout << "\nNúmero " << i+1 << ": ";
		cin >> pNum[i];
		// ou fazer: cin >> *(pNum+i);
		// ou ainda: cin >> *pAux++;
	}
	
	// Listar o array
	cout << "\n\nOs número lidos foram\n";
	for(int i=0; i<tot; i++){
		cout << "\nNúmero " << i+1 << ": ";
		cout << pNum[i] << endl;
	}
	
	// libertar a memória
	free( pNum );
	
	return 0;
}
