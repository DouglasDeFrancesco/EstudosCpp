#include <iostream>
#include <iomanip>
using namespace std;

/****************************
Faça um programa para 6 notas
para  4 alunos diferentes
1- pedir os valores e preencehr o array
2- listar o conteudo do array
*******************************/

const int totaluno = 2;
const int totnota = 3;

int main(int argc, char** argv) {

	int nota [totaluno][totnota];	// criar o array bidimencional
	float soma; 
	
	setlocale(LC_ALL, "");//pedir notas dos alunos
		for (int i=0;  i<totaluno; i++){ //percorre os alunos
	cout << "notas do aluno" << i+1 << endl;
				for(int j=0; j<totnota; j++){
			//ler notas do 1 aluno
		cin >> nota	[i][j];
	}
			
	}
//Escrever as notas
		for (int i=0;  i<totaluno; i++){ //percorre os alunos
	cout << "notas do aluno" << i+1  << ":";
	soma = 0;
	for(int j=0; j<totnota; j++){
			//Escrever notas do 1 aluno
		cout << setw(3) << nota [i][j] ;
		soma += nota [i][j];
	}
	cout << " Média :" << soma/totnota << endl;
			
	}
			 

    return 0;






		 
		 
	return 0;
}
