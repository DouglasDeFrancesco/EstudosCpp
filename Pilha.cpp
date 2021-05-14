#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

/******************************************************
	Lista simples com pessoas
	
	Pilha (inserir e remover � cabe�a)
	
*******************************************************/

// Criar o tipo "pes" que tem
// um campo "nome",
// outro campo "idade",
// e mais um campo "next" que � um apontador para outro "pes"
struct pes{
	char nome[81];	// dados
	int idade;		// dados
	pes *next;	// pointer para o pr�ximo elemento da lista
} *pHead=NULL;	// Cria a vari�vel pHead que � um apontador
				// para o 1� elemento da lista
				// � um apontador para um "pes"


/*----------------------------------------------------
	criar elemento novo
		pedir ao user os dados para o novo elemento
	copiar pHead para o NEXT do elemento novo
	copiar o novo para o pHead
-------------------------------------------------------*/
// Insere uma pessoa no in�cio da lista	
void inserirHead(){
	pes *novo; // criar pointer para a nova pessoa

	// Criar espa�o para um elemento (uma pessoa)
	novo = (pes *) malloc( sizeof(pes) );
	
	// testar se conseguiu obter mem�ria
	if( !novo ){
		cout << "N�o consegui inserir\n\n";
		return;
	}
	
	// pedir o nome e a idade (preencher os dados)
	cout << "Nome: ";
	cin.clear(); cin.sync();
	cin.getline(novo->nome, sizeof(novo->nome) ); //ler o nome
	cout << "Idade: ";
	cin.clear(); cin.sync();
	cin >> novo->idade; // ler a idade
	
	// Inserir o elemento na lista (� cabe�a)
	novo->next = pHead;
	pHead = novo;	
}


// Listar todas as pessoas
void listar(){
	pes *pAux;
	
	if( !pHead ){
		cout << "***********\n"
			 << "Lista vazia\n"
			 << "***********\n\n";
		return;
	}
	
	pAux = pHead; // apontar para o in�cio da lista
	
	cout << "********************\n"
		 << "Listagem das pessoas\n"
		 << "********************\n\n";
	while( pAux ){ // enquanto houver elementos...
		cout << "Nome: " << pAux->nome << endl
			 << "Idade: " << pAux->idade << endl
			 << "-----------\n";
		pAux = pAux->next; // passar ao pr�ximo
	}
	cout << "***************\n"
		 << "Fim da listagem\n"
		 << "***************\n\n";
}


// Apaga a pessoa do in�cio da lista
void apagarHead(){
	pes *pAux;
	
	// ver se a lista est� vazia
	if( !pHead ) return;
	
	pAux = pHead; // guardar apontador para o elemento a apagar
	pHead = pHead->next; // pHead aponta para o pr�ximo (remover o da cabe�a)
	free(pAux); // libertar a mem�ria do "apagado"
}


int main(int argc, char** argv) {
	char op;
	
	setlocale(LC_ALL, "");
	
	// programa para manipular a pilha
	
	do{
		// escrever menu
		cout << "\n**************\n"
			 << "* (i)nserir  *\n"
			 << "* (a)pagar   *\n"
			 << "* (l)istar   *\n"
			 << "* (t)erminar *\n"
			 << "**************\n"
			 << "Insira a sua escolha: ";
		
		// receber a escolha do utilizador
		cin.clear(); cin.sync();
		cin >> op;
		
		// fazer a ac��o escolhida
		switch(op){
			case 'i':{
				inserirHead();
				break;
			}
			case 'a':{
				apagarHead();
				break;
			}
			case 'l':{
				listar();
				break;
			}
		}
		
		
	} while (op!='t');
	
	return 0;
}
