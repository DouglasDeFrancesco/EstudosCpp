#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

/******************************************************
	Lista simples com pessoas
	
	Funções para inserir e remover à cabeça
	 +
	Funções para inserir e remover à cauda
	 +
	pointer pHead
	 +
	pointer pTail
	
*******************************************************/

// Criar o tipo "pes" que tem
// um campo "nome",
// outro campo "idade",
// e mais um campo "next" que é um apontador para outro "pes"
struct pes{
	char nome[81];	// dados
	int idade;		// dados
	pes *next;	// pointer para o próximo elemento da lista
} *pHead=NULL,	// Cria a variável pHead que é um apontador (1º elemento)
  *pTail=NULL;	// Cria a variável pTail que é um apontador (último elemento)
				// São apontadores para um "pes"


/*----------------------------------------------------
	criar elemento novo
		pedir ao user os dados para o novo elemento
	copiar pHead para o NEXT do elemento novo
	copiar o novo para o pHead
	se a lista está vazia, é preciso escrever no pTail
-------------------------------------------------------*/
// Insere uma pessoa no início da lista	
void inserirHead(){
	pes *novo; // criar pointer para a nova pessoa

	// Criar espaço para um elemento (uma pessoa)
	novo = (pes *) malloc( sizeof(pes) );
	
	// testar se conseguiu obter memória
	if( !novo ){
		cout << "Não consegui inserir\n\n";
		return;
	}
	
	// pedir o nome e a idade (preencher os dados)
	cout << "Nome: ";
	cin.clear(); cin.sync();
	cin.getline(novo->nome, sizeof(novo->nome) ); //ler o nome
	cout << "Idade: ";
	cin.clear(); cin.sync();
	cin >> novo->idade; // ler a idade
	
	// Inserir o elemento na lista (à cabeça)
	if( !pHead){
		// a lista está vazia, é preciso escrever no pTail
		pTail = novo;
	}
	novo->next = pHead;
	pHead = novo;	
}


// inserir um elemento no fim da lista
void inserirTail(){
	pes *novo; // criar pointer para a nova pessoa
	
	// Criar espaço para um elemento (uma pessoa)
	novo = (pes *) malloc( sizeof(pes) );
	
	// testar se conseguiu obter memória
	if( !novo ){
		cout << "Não consegui inserir\n\n";
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
		// a lista está vazia
		pHead = novo;
	}else{
		// a lista já tem elementos
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
	
	pAux = pHead; // apontar para o início da lista
	
	cout << "********************\n"
		 << "Listagem das pessoas\n"
		 << "********************\n\n";
	while( pAux ){ // enquanto houver elementos...
		cout << "Nome: " << pAux->nome << endl
			 << "Idade: " << pAux->idade << endl
			 << "-----------\n";
		pAux = pAux->next; // passar ao próximo
	}
	cout << "***************\n"
		 << "Fim da listagem\n"
		 << "***************\n\n";
}


// Apaga a pessoa do início da lista
void apagarHead(){
	pes *pAux;
	
	// ver se a lista está vazia
	if( !pHead ) return;
	
	if( pHead == pTail ){
		// a lista só tem 1 elemento
		pTail = NULL;
	}
	pAux = pHead; // guardar apontador para o elemento a apagar
	pHead = pHead->next; // pHead aponta para o próximo (remover o da cabeça)
	free(pAux); // libertar a memória do "apagado"
}


// Apaga uma pessoa do fim da lista
void apagarTail(){
	pes *p, // apnta um elemento à frente do pAnt
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
	
	// enquanto o p->next não for NULL,
	// não chegámos ao fim da lista
	// temos de avançar
	while( p->next ){
		p = p->next; // avançar o "p" para o próximo
		pAnt = pAnt->next; //avançar o "pAnt" para o próximo	
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
			 << "* 1. Inserir à cabeça *\n"
			 << "* 2. Apagar à cabeça  *\n"
			 << "* 3. Inserir à cauda  *\n"
			 << "* 4. Apagar à cauda   *\n"
			 << "* (l)istar            *\n"
			 << "* (t)erminar          *\n"
			 << "***********************\n"
			 << "Insira a sua escolha: ";
		
		// receber a escolha do utilizador
		cin.clear(); cin.sync();
		cin >> op;
		
		// fazer a acção escolhida
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
