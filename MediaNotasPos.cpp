#include <iostream>
#include <iomanip>
using namespace std;

/************************************************************
	Fa�a um programa para ler 6 notas
	1- Pedir os valores e preencher o array
	2- listar o conte�do do array
	3- Listar a m�dia considerando apenas as notas positivas
*************************************************************/
const int MaxNota = 3;
	
int main(int argc, char** argv) {
	int nota[MaxNota];
	float media = 0;
	int totPos = 0; // contador do total de positivas
	
	setlocale(LC_ALL,"");
	// ler as 6 notas
	cout << "Escreva as " << MaxNota <<" notas do aluno\n";
	for(int i=0; i<MaxNota; i++){ // percorrer as notas
		cin >> nota[i];		
	}

	// Escrever as notas
	cout << "\nAs notas lidas foram:\n";
	for(int i=0; i<MaxNota; i++){
		cout << "Nota " << i+1 << ":" << setw(3) << nota[i] << endl;
		if(nota[i] >= 10){
			media += nota[i];
			totPos++;
		}	
	}
	media /= totPos;
	
	cout << "  M�dia das positivas: " << media << endl;
	
	return 0;
}
