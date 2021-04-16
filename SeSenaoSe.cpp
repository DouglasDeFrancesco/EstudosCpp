#include <iostream>
using namespace std;

/**************************************************************
	Condi��o: instru��o if()
	Pode ter algumas variantes
		if()
		if() else
		if() else if()
		if() else if() else if()
		if() else if() else if() else

	Exemplo:
		1- pedir a idade
		2- se for menor que 14 			=> Ensino prim�rio ou b�sico
		3- se for menor ou igual a 17	=> Ensino secund�rio
		4- caso contr�rio				=> Ensino superior
***************************************************************/
	
int main(int argc, char** argv) {
	int x;
	
	setlocale(LC_ALL, "");
	cout << "Idade = ";
	cin >> x;
	
	if(x<14){ // A idade � menor que 14?
		cout << "Ensino prim�rio ou b�sico" << endl; // vem por aqui se a resposta for "sim"
	}else if(x<=17){
		cout << "Ensino secund�rio" << endl; // "n�o" no 1� teste e "sim" no 2�
	}else{
		cout << "Ensino superior" << endl; // quando os 2 testes d�o "n�o"
	}
	return 0;
}
