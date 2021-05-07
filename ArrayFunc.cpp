#include <iostream>
using namespace std;

/* Passar um array como par�metro */

void listar( int id[] ){ // note que n�o se especifica a dimens�o do array
	for(int i=0; i<3; i++){
		cout << "Idade " << i+1 << ": " << id[i] << endl;
	}
}


// o array � sempre passado por refer�ncia de endere�o
// n�o � necess�rio escrever o "&" antes do nome da vari�vel
// a prova � que a altera��o feita dentro desta fun��o
// � reconhecida no exterior (par�metro de ENTRADA/SA�DA)
void incrementar( int ida[] ){
	for(int i=0; i<3; i++){
		ida[i]++;
	}
}


int main(int argc, char** argv) {
	int idade[3] = {20, 30, 40}; // array com 3 elementos
	
	// passagem do array como par�metro
	listar(idade); // resultado: 20 30 40
	
	// somar 1 a cada idade
	incrementar(idade);

	// como se v� (ao executar), as idades foram incrementadas
	listar(idade); // resultado: 21 31 41
	
	return 0;
}
