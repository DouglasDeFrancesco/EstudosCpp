#include <iostream>
#include <string.h>
using namespace std;

// Defini��o de uma estrutura. N�o implica reserva de espa�o
// Criar um tipo novo chamado "pes"
struct pes{
	int idade;		// campo idade
	char nome[81];	// campo nome
};


int main(int argc, char** argv) {
	pes pessoa; // criar a vari�vel "pessoa" que � do tipo "pes"
	pes outraPessoa;
	
	// para fazer um conjunto de pessoas
	pes turma[3]; // array de estruturas
	
	// escrever no campo "idade" da vari�vel "pessoa"
	pessoa.idade = 20; // dizer que a pessoa tem 20 anos
	
	// escrever "Jorge" no campo "nome" da vari�vel "pessoa"
	strcpy(pessoa.nome, "Jorge");
	
	// escrever no ecr� os dados da pessoa
	cout << "Nome:  " << pessoa.nome << endl;
	cout << "Idade: " << pessoa.idade << endl;
	
	cout << "----------------------------" << endl;
	
	// pedir ao utilizador o nome para a outra pessoa
	cout << "Nome da outra pessoa: ";
	cin.getline(outraPessoa.nome, 81);
	
	// pedir ao utilizador a idade da outra pessoa
	cout << "Idade da outra pessoa: ";
	cin >> outraPessoa.idade;
	
	// escrever no ecr� os dados da outra pessoa
	cout << "Nome:  " << outraPessoa.nome << endl;
	cout << "Idade: " << outraPessoa.idade << endl;
	
	cout << "----------------------------" << endl;
	// ler, usando um ciclo de repeti��o, os nomes e idades para
	// todos os elementos da turma
	(escreva aqui o seu c�digo)
	
	
	// Escrever, usando um ciclo de repeti��o, os nomes e idades da turma
	(escreva aqui o seu c�digo)
	
	// Pai de todos os desafios
	// escrever as 3 pessoas ordenadas por idade
	
	return 0;
}
