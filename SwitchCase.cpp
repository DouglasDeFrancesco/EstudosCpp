#include <iostream>
using namespace std;

/*********************************************
	Nalgumas situações, quando temos muitos
	IFs encadeados,	podemos usar um SWITCH
	
	Nota 1: Só é válido se a variável a testar
	        em todos os IF for a mesma
	        
	Nota 2: O valor a comparar em cada CASE
			tem de ser constante
*********************************************/

int main(int argc, char** argv) {
	int x;
	
	setlocale(LC_ALL,"");
	// pedir o valor ao utilizador
	cout << "Valor para o x = ";
	cin >> x;
	
	switch(x){ // testar a variável "x"
		case 3:
			cout << "O valor é 3" << endl;
			break;
		case 4:
			cout << "O valor é 4" << endl;
			break;
		default:
			// isto é executado se falharem todos os case
			cout << "Não é 3 nem 4" << endl;
	}
	
	return 0;
}
