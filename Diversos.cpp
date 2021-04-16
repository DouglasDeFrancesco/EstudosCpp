#include <iostream>
#include <iomanip>  // necess�rio para o setw()
using namespace std;

/************************************************
	Instru��es diversas
	 - Definir espa�o para escrever um n�mero
	   (para alinhar valores � direita)
	 - Escrever caracteres portugueses
*************************************************/

int main(int argc, char** argv) {
	
	// setw() define o total de espa�os para escrever o valor
	cout << setw(5) << 12 << endl;
	cout << setw(5) << 123 << endl;
	cout << setw(5) << 8 << endl;
	// resultado: os n�meros ficam alinhados � direita
	// muito �til para fazer tabelas
	
	// escrever caracteres portugueses
	cout << "Isto assim n�o d�" << endl;
	setlocale(LC_ALL, ""); // para usar caracteres portugueses
	cout << "Isto assim n�o d�? D� sim!" << endl;
		
	return 0;
}
