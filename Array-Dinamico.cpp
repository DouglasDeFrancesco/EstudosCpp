/**************************************************************************
 Este exemplo mostra como se cria uma array durante a execu��o do programa
 Note-se que, quando se est� a escrever o programa, n�o se sabe qual vai
 ser a dimens�o para o array.
 � este o interesse das vari�veis din�micas (criadas em runtime)
**************************************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int tot; // n�mero de elementos para o array
	int *pNum, *pAux;
	
	setlocale(LC_ALL,"");
	cout << "Total de n�meros: "; cin >> tot;
	
	// aloca��o de mem�ria para o array de n�meros
	pNum = (int *) malloc( tot * sizeof(int) );
	
	// testar se conseguiu alocar
	if(!pNum){
		cout << "Mem�ria insuficiente\n";
		return 8; //ERROR_NOT_ENOUGH_MEMORY
	}
	
	// n�o perder a refer�ncia para o in�cio do array
	pAux = pNum;

	// ler valores para o array
	for(int i=0; i<tot; i++){
		cout << "\nN�mero " << i+1 << ": ";
		cin >> pNum[i];
		// ou fazer: cin >> *(pNum+i);
		// ou ainda: cin >> *pAux++;
	}
	
	// Listar o array
	cout << "\n\nOs n�mero lidos foram\n";
	for(int i=0; i<tot; i++){
		cout << "\nN�mero " << i+1 << ": ";
		cout << pNum[i] << endl;
	}
	
	// libertar a mem�ria
	free( pNum );
	
	return 0;
}
