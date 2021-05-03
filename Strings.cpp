/***********************************************************************
* Esta sequ�ncia de exemplos mostra as diferen�as entre usar strings
*  - no formato array de caractares
*  ou
*  - no formato string (objecto)
************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <windows.h> // para usar a fun��o Sleep(milisegundos)
#include <strings.h> // para o array de char
using namespace std; // para o objecto string (e para o cin e cout)


int main(int argc, char** argv) {
	
	/**********************************
	  Array de char (termina por '\0')
	***********************************/
	cout << "***************** Array de char ************\n\n";
	char st1[81], st1final[81], res1[161];
	
	setlocale(LC_ALL,"");
	cout << "Escreva uma string. Pode usar espa�os!\n";
	// para ler deve-se usar a fun��o cin.getline();
	// para que a string possa conter espa�os
	cin.getline(st1, 81); // � obrigat�rio especificar a dimens�o do array
	cout << "Eu li:" << st1 << endl;
	
	cout << "Comprimento da string = " << strlen(st1) << endl;
	
	// percorrer uma string
	for(int i=0; i<strlen(st1); i++){
		cout << st1[i]; // escreve a string no ecr�, caracter a caracter
		Sleep(150);
	}
	cout << endl;
	
	// Outra forma de percorrer a string
	// parando quando se encontra o terminador
	for( int i=0; st1[i]!='\0'; i++){
		cout << st1[i];
	}
	cout << endl;
	
	// copiar strings
	// se tentarmos a instru��o "st1final = st1;" o compilador d� erro
	// n�o se podem fazer atribui��es como se fazem para os outros tipos
	// em vez disso, ou se faz um "for" para percorrer a string
	// ou se usa a fun��o strcpy()
	strcpy(st1final, st1);
	cout << "Ap�s a c�pia...\n";
	cout << "Comprimento da st1final = " << strlen(st1final) << endl;
	cout << "st1final=" << st1final << endl;
	
	// juntar (concatenar) duas strings
	strcpy(res1, st1);
	strcat(res1, st1final); // acrescentar no fim da string existente
	cout << "Comprimento da res1 = " << strlen(res1) << endl;
	cout << "res1=" << res1 << endl;
	
	/***************************************************
	 objecto string ('\0' � um caracter como os outros)
	****************************************************/
	cout << "\n\n\n************** Objecto string ***********\n\n";
	string st2, st2final, res2;
	
	cout << "Escreva outra string: ";
	getline(cin, st2); // fun��o para ler strings
	cout << "Eu li:" << st2 << endl;
	
	cout << "Comprimento da string (com size()) = " << st2.size() << endl;
	// tamb�m se pode usar
	cout << "Comprimento da string (com length()) = " << st2.length() << endl;
	
	// percorrer uma string
	// N�o se deve usar o teste st2[i]=='\0' como se faz no array de char
	for(int i=0; i < st2.size(); i++){
		cout << st2[i]; // escreve um caracter de cada vez
		Sleep(150);
	}
	cout << endl;
	
	// copiar strings
	// com o objecto string, podem-se fazer atribui��es usando o =
	// tal como fazemos para os outros tipos
	st2final = st2;
	cout << "Comprimento da string st2final = " << st2final.size() << endl;
	cout << "st2final=" << st2final << endl;
	
	// juntar (concatenar) duas strings
	res2 = st2 + st2final;
	cout << "Comprimentos da string res2 = " << res2.size() << endl;
	cout << "res2=" << res2 << endl;
	
	return 0;
}
