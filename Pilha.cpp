#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

/******************************************************
	Lista simples com pessoas
	
	Pilha (inserir e remover à cabeça)
	
*******************************************************/

// Criar o tipo "pes" que tem
// um campo "nome",
// outro campo "idade",
// e mais um campo "next" que é um apontador para outro "pes"
struct pes{
	char nome[81];	// dados
	int idade;		// dados
	pes *next;	// pointer para o próximo elemento da lista
} *pHead=NULL;	// Cria a variável pHead que é um apontador
				// para o 1º elemento da lista
				// É um apontador para um "pes"


/*----------------------------------------------------
	criar elemento novo
		pedir ao user os dados para o novo elemento
	copiar pHead para o NEXT do elemento novo
	copiar o novo para o pHead
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
	
	pAux = pHead; // guardar apontador para o elemento a apagar
	pHead = pHead->next; // pHead aponta para o próximo (remover o da cabeça)
	free(pAux); // libertar a memória do "apagado"
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
		
		// fazer a acção escolhida
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
