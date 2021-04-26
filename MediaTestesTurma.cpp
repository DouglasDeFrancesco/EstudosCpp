/******************************************************************
NOTA sobre a formata��o de n�meros
----------------------------------

	cout << setprecision(n); // define "n" como o n� m�ximo de
							 // d�gitos a mostrar (excluindo o ".")
							 
	cout << fixed;	// fixa o n�mero de casas decimais
					// se necess�rio acrescenta zeros � direita
					
	cout << scientific; // mostrar o valor em nota��o cient�fica
					
	Ap�s o fixed ou o scientific, o set precision passa a definir
	o n� de casas decimais (em vez de ser o n� de d�gitos) a mostrar
*******************************************************************/	
#include <iostream>
#include <iomanip>
using namespace std;

/************************************************************
	Fa�a um programa para ler 6 notas
	para cada um de 4 alunos diferentes
	1- Pedir os valores e preencher o array
	2- Listar o conte�do do array
	3- Listar a m�dia de cada aluno � frente das suas notas (horizontal)
	4- Lista a m�dia dos testes por baixo de cada coluna (vertical)
	5- Mostra a m�dia da turma (m�dia das m�dias)
*************************************************************/
const int TotAluno = 4;
const int TotNota = 6;

int main(int argc, char** argv) {
	int nota[TotAluno][TotNota]; // criar array bidimensional
	float mediaTeste[TotNota]; // m�dias dos testes
	float mediaTurma = 0; // m�dia da turma
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
	
	// Colocar as m�dias a zero
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
			mediaTeste[j] += nota[i][j]; // somat�rio das notas de cada teste
		}
		cout  << "     M�dia: " << soma/TotNota << endl;
	}
	
	// para alinhar a 1� m�dia com a coluna das notas
	cout << "  M�dia:   ";
	cout << fixed << setprecision(2);
	
	// Calcular a m�dia para cada teste
	for(int i=0; i<TotNota; i++){
		mediaTeste[i] /= TotAluno;
		cout << setw(6) << mediaTeste[i];
		mediaTurma += mediaTeste[i];  // soma das m�dias dos testes
	}
	mediaTurma /= TotNota; // c�lculo da m�dia da turma
	
	cout << "  M�dia da turma: " << mediaTurma;

	return 0;
}
