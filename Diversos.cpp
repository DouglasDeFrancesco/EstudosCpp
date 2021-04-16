#include <iostream>
#include <iomanip>  // necessário para o setw()
using namespace std;

/************************************************
	Instruções diversas
	 - Definir espaço para escrever um número
	   (para alinhar valores à direita)
	 - Escrever caracteres portugueses
*************************************************/

int main(int argc, char** argv) {
	
	// setw() define o total de espaços para escrever o valor
	cout << setw(5) << 12 << endl;
	cout << setw(5) << 123 << endl;
	cout << setw(5) << 8 << endl;
	// resultado: os números ficam alinhados à direita
	// muito útil para fazer tabelas
	
	// escrever caracteres portugueses
	cout << "Isto assim não dá" << endl;
	setlocale(LC_ALL, ""); // para usar caracteres portugueses
	cout << "Isto assim não dá? Dá sim!" << endl;
		
	return 0;
}
