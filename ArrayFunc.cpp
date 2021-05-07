#include <iostream>
using namespace std;

/* Passar um array como parâmetro */

void listar( int id[] ){ // note que não se especifica a dimensão do array
	for(int i=0; i<3; i++){
		cout << "Idade " << i+1 << ": " << id[i] << endl;
	}
}


// o array é sempre passado por referência de endereço
// não é necessário escrever o "&" antes do nome da variável
// a prova é que a alteração feita dentro desta função
// é reconhecida no exterior (parãmetro de ENTRADA/SAÍDA)
void incrementar( int ida[] ){
	for(int i=0; i<3; i++){
		ida[i]++;
	}
}


int main(int argc, char** argv) {
	int idade[3] = {20, 30, 40}; // array com 3 elementos
	
	// passagem do array como parâmetro
	listar(idade); // resultado: 20 30 40
	
	// somar 1 a cada idade
	incrementar(idade);

	// como se vê (ao executar), as idades foram incrementadas
	listar(idade); // resultado: 21 31 41
	
	return 0;
}
