/*****************************************************************************
* Para utiliza��o din�mica de mem�ria, h� 4 fun��es
* malloc()	-> pedir mem�ria ao PC
* calloc()
* realloc()
* free()	-> libertar a mem�ria
*
* sizeof( tipo )	-> devolve a dimens�o do tipo indicado
*
* As vari�veis s�o criadas durante a execu��o do programa.
* Na altura em que se escreve o c�digo, ainda n�o se sabe qual a dimens�o
* que se pretende para as vari�veis (sobretudo se forem arrays).
* Este conceitos s�o importantes para perceber as LISTAS, que ir�o ser
* leccionadas mais � frente.
*
* Neste exemplo vamos:
* 1- alocar espa�o para guardar o n�mero
* 2- testar se foi foss�vel alocar o espa�o
* 3- ler o valor e guard�-lo
* 4- somar 4 ao valor lido
* 5- escrever o resultado
* 6- libertar o espa�o alocado
*****************************************************************************/
#include <stdlib.h> // aqui est�o as fun��es para aloca��o din�mica
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	// criar um apontador para um inteiro
	int *pNum;
	
	// 1. alocar mem�ria para guardar o n�mero
	pNum = (int *) malloc( sizeof(int) );
	// (int *) � para converter o pointer que o malloc() devolve
	// num pointer para um inteiro
	// sizeof(int) � para dizer ao malloc() qual a quantidade de mem�ria
	// que precisa de reservar
	
	// 2. testar se conseguiu alocar a mem�ria
	if( !pNum ) return 0;
	// pNum fica com o endere�o da mem�ria alocada (se estiver tudo OK)
	// pNum fica vazio (com zero) se o sistema n�o deixou alocar mem�ria
	
	// em "C"	ZERO (vazio) significa FALSO
	//			DIFERENTE DE ZERO significa VERDADEIRO
	
	// 3. Ler o n�mero
	cout << "Escreva o valor: ";
	cin >> *pNum;
	
	// 4. Somar-lhe 4
	*pNum += 4;
	
	//5. Escrever o resultado
	cout << "Resultado da soma: " << *pNum;
	
	//6. Libertar o espa�o alocado
	free( pNum );
	
	return 0;
}
