#include <iostream>
using namespace std;

/**************************************************************
	Condição: instrução if()
	Pode ter algumas variantes
		if()
		if() else
		if() else if()
		if() else if() else if()
		if() else if() else if() else

	Exemplo:
		1- pedir a idade
		2- se for menor que 14 			=> Ensino primário ou básico
		3- se for menor ou igual a 17	=> Ensino secundário
		4- caso contrário				=> Ensino superior
***************************************************************/
	
int main(int argc, char** argv) {
	int x;
	
	setlocale(LC_ALL, "");
	cout << "Idade = ";
	cin >> x;
	
	if(x<14){ // A idade é menor que 14?
		cout << "Ensino primário ou básico" << endl; // vem por aqui se a resposta for "sim"
	}else if(x<=17){
		cout << "Ensino secundário" << endl; // "não" no 1º teste e "sim" no 2º
	}else{
		cout << "Ensino superior" << endl; // quando os 2 testes dão "não"
	}
	return 0;
}
