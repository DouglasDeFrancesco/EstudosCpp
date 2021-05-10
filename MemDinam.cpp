/*****************************************************************************
* Para utilização dinâmica de memória, há 4 funções
* malloc()	-> pedir memória ao PC
* calloc()
* realloc()
* free()	-> libertar a memória
*
* sizeof( tipo )	-> devolve a dimensão do tipo indicado
*
* As variáveis são criadas durante a execução do programa.
* Na altura em que se escreve o código, ainda não se sabe qual a dimensão
* que se pretende para as variáveis (sobretudo se forem arrays).
* Este conceitos são importantes para perceber as LISTAS, que irão ser
* leccionadas mais à frente.
*
* Neste exemplo vamos:
* 1- alocar espaço para guardar o número
* 2- testar se foi fossível alocar o espaço
* 3- ler o valor e guardá-lo
* 4- somar 4 ao valor lido
* 5- escrever o resultado
* 6- libertar o espaço alocado
*****************************************************************************/
#include <stdlib.h> // aqui estão as funções para alocação dinâmica
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	// criar um apontador para um inteiro
	int *pNum;
	
	// 1. alocar memória para guardar o número
	pNum = (int *) malloc( sizeof(int) );
	// (int *) é para converter o pointer que o malloc() devolve
	// num pointer para um inteiro
	// sizeof(int) é para dizer ao malloc() qual a quantidade de memória
	// que precisa de reservar
	
	// 2. testar se conseguiu alocar a memória
	if( !pNum ) return 0;
	// pNum fica com o endereço da memória alocada (se estiver tudo OK)
	// pNum fica vazio (com zero) se o sistema não deixou alocar memória
	
	// em "C"	ZERO (vazio) significa FALSO
	//			DIFERENTE DE ZERO significa VERDADEIRO
	
	// 3. Ler o número
	cout << "Escreva o valor: ";
	cin >> *pNum;
	
	// 4. Somar-lhe 4
	*pNum += 4;
	
	//5. Escrever o resultado
	cout << "Resultado da soma: " << *pNum;
	
	//6. Libertar o espaço alocado
	free( pNum );
	
	return 0;
}
