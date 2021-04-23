#include <iostream>
using namespace std;

/* Pedir uma frase (sem espa�os) terminada por um "." (m�ximo 40 caracteres)
*	 e ler as letras para um array.
*	(N�o teste os excessos. O utilizador escreve menos de 40 caracteres)
*	Use "cin" para a leitura e "cout" para a escrita.
*	N�o pode usar strings (se n�o sabe o que s�o, de certeza que n�o as usa)
*
*	Diga quantas vogais est�o na frase
*/

/******************************************************
 NOTA
 	"g" -> string tem 2 caracteres
	       (um � invis�vel e � o terminador da string)

	'g' -> apenas 1 caracter
*******************************************************/	


const int MAX = 40; //definir a dimens�o do array

int main(int argc, char** argv) {
	char frase[MAX]; // criar o array
	int tot; // total de letras lidas
	int cont=0; // contar as ocorr�ncias
	
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
	
	// contar as vogais (solu��o 1)
	for(int i=0; i<tot; i++){
		if(frase[i] == 'a') cont++;
		if(frase[i] == 'e') cont++;
		if(frase[i] == 'i') cont++;
		if(frase[i] == 'o') cont++;
		if(frase[i] == 'u') cont++;
	}
	cout << "A frase tem " << cont << " vogais.\n";	
	
	// contar as vogais (solu��o 2)
	cont = 0;
	for(int i=0; i<tot; i++){
		if(frase[i] == 'a') cont++;
		else if(frase[i] == 'e') cont++;
		else if(frase[i] == 'i') cont++;
		else if(frase[i] == 'o') cont++;
		else if(frase[i] == 'u') cont++;
	}
	cout << "A frase tem " << cont << " vogais.\n";	
	
	// contar as vogais (solu��o 3)
	cont = 0;
	for(int i=0; i<tot; i++){
		if( frase[i] == 'a' ||
			frase[i] == 'e' ||
			frase[i] == 'i' ||
			frase[i] == 'o' ||
			frase[i] == 'u'
		) cont++;
	}
	cout << "A frase tem " << cont << " vogais.\n";	

	// contar as vogais (solu��o 4) -> a mais eficiente
	cont = 0;
	for(int i=0; i<tot; i++){
		switch( frase[i] ){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cont++;
		}
	}
	cout << "A frase tem " << cont << " vogais.\n";	

	return 0;
}
