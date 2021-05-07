#include <iostream>
using namespace std;

/****************************************************************************
* Utiliza��o de fun��es
*	- passagem de par�metros por valor (s� de entrada)
*	- passagem de par�metros por refer�ncia de endere�o (entrada e/ou sa�da)
*	- passagem usando pointers (entrada e/ou sa�da)
*****************************************************************************/

// usando pointers... tamb�m podemos ter par�metros de sa�da
void soma(int num1, int num2, int *res){
	*res = num1 + num2; // o apontado por "res" recebe o resultado
}

int main(int argc, char** argv) {
	int val1, val2, total;
	
	cout << "Valor 1 = ";
	cin >> val1;
	cout << "Valor 2 = ";
	cin >> val2;
	
	// chamada da fun��o
	// passa-se o endere�o do local onde queremos guardar o resultado
	soma(val1, val2, &total);
	
	cout << "Resultado da soma = " << total << endl;
	
	return 0;
}
