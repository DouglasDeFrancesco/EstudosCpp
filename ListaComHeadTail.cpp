#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

/******************************************************
	Lista simples com pessoas
	
	Fun��es para inserir e remover � cabe�a
	 +
	Fun��es para inserir e remover � cauda
	 +
	pointer pHead
	 +
	pointer pTail
	
*******************************************************/

// Criar o tipo "pes" que tem
// um campo "nome",
// outro campo "idade",
// e mais um campo "next" que � um apontador para outro "pes"
struct pes{
	char nome[81];	// dados
	int idade;		// dados
	pes *next;	// pointer para o pr�ximo elemento da lista
} *pHead=NULL,	// Cria a vari�vel pHead que � um apontador (1� elemento)
  *pTail=NULL;	// Cria a vari�vel pTail que � um apontador (�ltimo elemento)
				// S�o apontadores para um "pes"


/*----------------------------------------------------
	criar elemento novo
		pedir ao user os dados para o novo elemento
	copiar pHead para o NEXT do elemento novo
	copiar o novo para o pHead
	se a lista est� vazia, � preciso escrever no pTail
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
	if( !pHead){
		// a lista est� vazia, � preciso escrever no pTail
		pTail = novo;
	}
	novo->next = pHead;
	pHead = novo;	
}


// inserir um elemento no fim da lista
void inserirTail(){
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
	
	if( !pTail ){
		// a lista est� vazia
		pHead = novo;
	}else{
		// a lista j� tem elementos
		pTail->next = novo;
	}
		
	pTail = novo;	
	novo->next = NULL;
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
	
	if( pHead == pTail ){
		// a lista s� tem 1 elemento
		pTail = NULL;
	}
	pAux = pHead; // guardar apontador para o elemento a apagar
	pHead = pHead->next; // pHead aponta para o pr�ximo (remover o da cabe�a)
	free(pAux); // libertar a mem�ria do "apagado"
}


// Apaga uma pessoa do fim da lista
void apagarTail(){
	pes *p, // apnta um elemento � frente do pAnt
		*pAnt; // aponta para o elemento anterior ao apontado por p
		
	if( !pHead ) return; // lista vazia
	
	if( pHead == pTail ){
		// lista tem 1 elemento
		free(pHead);
		pHead = NULL;
		pTail = NULL;
		return;
	}
	
	pAnt = pHead;
	p = pAnt->next;
	
	// enquanto o p->next n�o for NULL,
	// n�o cheg�mos ao fim da lista
	// temos de avan�ar
	while( p->next ){
		p = p->next; // avan�ar o "p" para o pr�ximo
		pAnt = pAnt->next; //avan�ar o "pAnt" para o pr�ximo	
	}
	pAnt->next = NULL;
	pTail = pAnt;
	free(p);
}

int main(int argc, char** argv) {
	char op;
	
	setlocale(LC_ALL, "");
	
	// programa para manipular a pilha
	
	do{
		// escrever menu
		cout << "\n***********************\n"
			 << "* 1. Inserir � cabe�a *\n"
			 << "* 2. Apagar � cabe�a  *\n"
			 << "* 3. Inserir � cauda  *\n"
			 << "* 4. Apagar � cauda   *\n"
			 << "* (l)istar            *\n"
			 << "* (t)erminar          *\n"
			 << "***********************\n"
			 << "Insira a sua escolha: ";
		
		// receber a escolha do utilizador
		cin.clear(); cin.sync();
		cin >> op;
		
		// fazer a ac��o escolhida
		switch(op){
			case '1':{
				inserirHead();
				break;
			}
			case '2':{
				apagarHead();
				break;
			}
			case '3':{
				inserirTail();
				break;
			}
			case '4':{
				apagarTail();
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
