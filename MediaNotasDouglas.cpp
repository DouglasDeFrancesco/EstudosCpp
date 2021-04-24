#include <iostream>
#include <iomanip>
using namespace std;

/************************************************************
	Fa�a um programa para ler 6 notas
	para cada um de 4 alunos diferentes
	1- Pedir os valores e preencher o array
	2- Listar o conte�do do array
	3- Listar a m�dia de cada aluno � frente das suas notas
	4- listar a m�dia de cada nota (por coluna)
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
		cout  << "  M�dia: " << soma/TotNota << endl;
	}
	
	//listar a m�dia de cada nota (por coluna)
	cout  << "M�dia: " <<setw(13);
	for(int j=0; j<TotNota; j++){ 
	soma=0;
	for(int i=0; i<TotAluno; i++){// percorre os alunos
	soma += nota[i][j];
}
cout << soma/TotAluno<<setw(3);
}
	return 0;
}
