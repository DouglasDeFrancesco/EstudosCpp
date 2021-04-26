/******************************************************************
NOTA sobre a formatação de números
----------------------------------

	cout << setprecision(n); // define "n" como o nº máximo de
							 // dígitos a mostrar (excluindo o ".")
							 
	cout << fixed;	// fixa o número de casas decimais
					// se necessário acrescenta zeros à direita
					
	cout << scientific; // mostrar o valor em notação científica
					
	Após o fixed ou o scientific, o set precision passa a definir
	o nº de casas decimais (em vez de ser o nº de dígitos) a mostrar
*******************************************************************/	
#include <iostream>
#include <iomanip>
using namespace std;

/************************************************************
	Faça um programa para ler 6 notas
	para cada um de 4 alunos diferentes
	1- Pedir os valores e preencher o array
	2- Listar o conteúdo do array
	3- Listar a média de cada aluno à frente das suas notas (horizontal)
	4- Lista a média dos testes por baixo de cada coluna (vertical)
	5- Mostra a média da turma (média das médias)
*************************************************************/
const int TotAluno = 4;
const int TotNota = 6;

int main(int argc, char** argv) {
	int nota[TotAluno][TotNota]; // criar array bidimensional
	float mediaTeste[TotNota]; // médias dos testes
	float mediaTurma = 0; // média da turma
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
	
	// Colocar as médias a zero
	for(int i=0; i<TotNota; i++){
		mediaTeste[i] = 0;
	}
	
	// Escrever as notas
	for(int i=0; i<TotAluno; i++){ // percorre os alunos
		cout << "Aluno " << i+1 << ":";
		soma = 0;
		for(int j=0; j<TotNota; j++){
			// Escrever notas de 1 aluno
			cout << setw(6) << nota[i][j];
			soma += nota[i][j];
			mediaTeste[j] += nota[i][j]; // somatório das notas de cada teste
		}
		cout  << "     Média: " << soma/TotNota << endl;
	}
	
	// para alinhar a 1ª média com a coluna das notas
	cout << "  Média:   ";
	cout << fixed << setprecision(2);
	
	// Calcular a média para cada teste
	for(int i=0; i<TotNota; i++){
		mediaTeste[i] /= TotAluno;
		cout << setw(6) << mediaTeste[i];
		mediaTurma += mediaTeste[i];  // soma das médias dos testes
	}
	mediaTurma /= TotNota; // cálculo da média da turma
	
	cout << "  Média da turma: " << mediaTurma;

	return 0;
}
