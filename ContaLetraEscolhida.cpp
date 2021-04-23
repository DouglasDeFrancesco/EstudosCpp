#include <iostream>
using namespace std;

/* Pedir uma frase (sem espa�os) terminada por um "." (m�ximo 40 caracteres)
*	 e ler as letras para um array.
*	(N�o teste os excessos. O utilizador escreve menos de 40 caracteres)
*	Use "cin" para a leitura e "cout" para a escrita.
*	N�o pode usar strings (se n�o sabe o que s�o, de certeza que n�o as usa)
*
*	Pedir uma letra para verificar as ocorr�ncias
*
*	Diga quantas vezes encontrou a letra escolhida
*/

const int MAX = 40; //definir a dimens�o do array

int main(int argc, char** argv) {
	char frase[MAX]; // criar o array
	int tot; // total de letras lidas
	int cont=0; // contar as ocorr�ncias
	char letra;
	
	setlocale(LC_ALL,"");
	cout << "Escreva uma frase (sem espa�os) terminada por um ponto\n";
	
	// ler as teclas para dentro do array
	for(int i=0; i<MAX; i++){
		cin >> frase[i];
		if(frase[i]=='.'){
			tot = i; // memoriza quantas letras foram lidas
			break;
		}
	}
	
	cout << "Frase lida\n";
	for(int i=0; i<tot; i++){
		cout << frase[i];
	}
	cout << endl;
	
	// perguntar qual a letra a contar
	cout << "Escolha uma letra para contar: ";
	cin >> letra;
	
	// contar as ocorr�ncias da letra
	for(int i=0; i<tot; i++){
		if(frase[i] == letra) cont++;
	}
	cout << "A frase tem " << cont << " ocorr�ncias da letra \""
		 << letra << "\"";	
	
	return 0;
}
