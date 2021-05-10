#include <iostream>
#include <string.h>
using namespace std;

// Definição de uma estrutura. Não implica reserva de espaço
// Criar um tipo novo chamado "pes"
struct pes{
	int idade;		// campo idade
	char nome[81];	// campo nome
};


int main(int argc, char** argv) {
	pes pessoa; // criar a variável "pessoa" que é do tipo "pes"
	pes outraPessoa;
	
	// para fazer um conjunto de pessoas
	pes turma[3]; // array de estruturas
	pes aux;
	
	// escrever no campo "idade" da variável "pessoa"
	pessoa.idade = 20; // dizer que a pessoa tem 20 anos
	
	// escrever "Jorge" no campo "nome" da variável "pessoa"
	strcpy(pessoa.nome, "Jorge");
	
	// escrever no ecrã os dados da pessoa
	cout << "Nome:  " << pessoa.nome << endl;
	cout << "Idade: " << pessoa.idade << endl;
	
	cout << "----------------------------" << endl;
	
	// pedir ao utilizador o nome para a outra pessoa
	cout << "Nome da outra pessoa: ";
	cin.getline(outraPessoa.nome, 81);
	
	// pedir ao utilizador a idade da outra pessoa
	cout << "Idade da outra pessoa: ";
	cin >> outraPessoa.idade;
	
	// escrever no ecrã os dados da outra pessoa
	cout << "Nome:  " << outraPessoa.nome << endl;
	cout << "Idade: " << outraPessoa.idade << endl;
	
	cout << "----------------------------" << endl;
	// ler, usando um ciclo de repetição, os nomes e idades para
	// todos os elementos da turma
	for(int i=0; i<3; i++){
		cout << "Nome " << i+1 << ": ";
		cin.clear(); cin.sync(); // com isto podem-se misturar cin com cin.getline()
		cin.getline(turma[i].nome, 81);
		cout << "Idade " << i+1 << ": ";
		cin.clear(); cin.sync(); // com isto podem-se misturar cin com cin.getline()
		cin >> turma[i].idade;
	}
	
	
	// Escrever, usando um ciclo de repetição, os nomes e idades da turma
	cout << "\nDados lidos das 3 pessoas\n"
		 << "-------------------------\n";
	for(int i=0; i<3; i++){
		cout << "Nome " << i+1 << ": " << turma[i].nome << endl;
		cout << "Idade " << i+1 << ": " << turma[i].idade << endl;
	}
	
	// Pai de todos os desafios
	// escrever as 3 pessoas ordenadas por idade
	if(turma[0].idade>turma[1].idade){
		// trocar as idades
		aux.idade=turma[0].idade;
		turma[0].idade=turma[1].idade;
		turma[1].idade=aux.idade;
		//trocar os nomes
		strcpy(aux.nome, turma[0].nome);
		strcpy(turma[0].nome, turma[1].nome);
		strcpy(turma[1].nome, aux.nome);
	}
	// chegado aqui, n1 tem o menor dos 2
	
	if(turma[1].idade>turma[2].idade){
		// trocar as idades
		aux.idade=turma[1].idade;
		turma[1].idade=turma[2].idade;
		turma[2].idade=aux.idade;
		//trocar os nomes
		strcpy(aux.nome, turma[1].nome);
		strcpy(turma[1].nome, turma[2].nome);
		strcpy(turma[2].nome, aux.nome);
	}
	// chegado aqui, n3 tem o maior dos 3
	
	if(turma[0].idade>turma[1].idade){
		// trocar as idades
		aux.idade=turma[0].idade;
		turma[0].idade=turma[1].idade;
		turma[1].idade=aux.idade;
		//trocar os nomes
		strcpy(aux.nome, turma[0].nome);
		strcpy(turma[0].nome, turma[1].nome);
		strcpy(turma[1].nome, aux.nome);
	}

	// Escrever as pessoas ordenadas por idade
	cout << "\nPessoas ordenadas por idade\n"
		 << "---------------------------\n";
	for(int i=0; i<3; i++){
		cout << "Nome " << i+1 << ": " << turma[i].nome << endl;
		cout << "Idade " << i+1 << ": " << turma[i].idade << endl;
	}
	return 0;
}
