#include <iostream>
using namespace std;

/* Pedir uma frase (sem espaços) terminada por um "." (máximo 40 caracteres)
*	 e ler as letras para um array.
*	(Não teste os excessos. O utilizador escreve menos de 40 caracteres)
*	Use "cin" para a leitura e "cout" para a escrita.
*	Não pode usar strings (se não sabe o que são, de certeza que não as usa)
*
*	Diga quantas vogais estão na frase
*/

/******************************************************
 NOTA
 	"g" -> string tem 2 caracteres
	       (um é invisível e é o terminador da string)

	'g' -> apenas 1 caracter
*******************************************************/	


const int MAX = 40; //definir a dimensão do array

int main(int argc, char** argv) {
	char frase[MAX]; // criar o array
	int tot; // total de letras lidas
	int cont=0; // contar as ocorrências
	
	setlocale(LC_ALL,"");
	cout << "Escreva uma frase (sem espaços) terminada por um ponto\n";
	
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
	
	// contar as vogais (solução 1)
	for(int i=0; i<tot; i++){
		if(frase[i] == 'a') cont++;
		if(frase[i] == 'e') cont++;
		if(frase[i] == 'i') cont++;
		if(frase[i] == 'o') cont++;
		if(frase[i] == 'u') cont++;
	}
	cout << "A frase tem " << cont << " vogais.\n";	
	
	// contar as vogais (solução 2)
	cont = 0;
	for(int i=0; i<tot; i++){
		if(frase[i] == 'a') cont++;
		else if(frase[i] == 'e') cont++;
		else if(frase[i] == 'i') cont++;
		else if(frase[i] == 'o') cont++;
		else if(frase[i] == 'u') cont++;
	}
	cout << "A frase tem " << cont << " vogais.\n";	
	
	// contar as vogais (solução 3)
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

	// contar as vogais (solução 4) -> a mais eficiente
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
