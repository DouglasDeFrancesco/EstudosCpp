#include <iostream>
#include <iomanip>
using namespace std;

/************************************************************
	Faça um programa para ler 6 notas
	para cada um de 4 alunos diferentes
	1- Pedir os valores e preencher o array
	2- Listar o conteúdo do array
	3- Listar a média de cada aluno à frente das suas notas
	4- listar a média de cada nota (por coluna)
*************************************************************/
const int TotAluno = 2;
const int TotNota = 3;

int main(int argc, char** argv) {
	int nota[TotAluno][TotNota]; // criar array bidimensional
	float soma;
	
	setlocale(LC_ALL,"");
	// Pedir as notas de todos os alunos
	for(int i=0; i<TotAluno; i++){ // percorre os alunos
		cout << "Notas do aluno " << i+1 << endl;
		for(int j=0; j<TotNota; j++){
			// ler notas de 1 aluno
			cin >> nota[i][j];
		}
	}
	
	// Escrever as notas
	for(int i=0; i<TotAluno; i++){ // percorre os alunos
		cout << "Notas do aluno " << i+1 << ":";
		soma = 0;
		for(int j=0; j<TotNota; j++){
			// Escrever notas de 1 aluno
			cout << setw(3) << nota[i][j]<< setw(8);
			soma += nota[i][j];
		}
		cout  << "  Média: " << soma/TotNota << endl;
	}
	
	//listar a média de cada nota (por coluna)
	cout  << "Média: " <<setw(13);
	for(int j=0; j<TotNota; j++){ 
	soma=0;
	for(int i=0; i<TotAluno; i++){// percorre os alunos
	soma += nota[i][j];
}
cout << soma/TotAluno<<setw(3);
}
	return 0;
}
