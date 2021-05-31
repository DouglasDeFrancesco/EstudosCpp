#include <iostream>
#include <cstdlib>

using namespace std;

#include "Contato.h"

int main(int argc, char** argv) {
	//teste exercicio alinea a ------------
	string nome;
	string telefone;
	string email;
	
	Contato agenda[3];
	
	//introduzir 
	
	for(int i=0; i<2; i++){
		
	
		
		cout << "Introduzir o Nome: ";
		getline(cin, nome);
		
				
		cout << "Introduza o telefone: ";
		cin >> telefone;
		
		cout << "Introduza o email: ";
		cin >> email;
		
		//criar objetos de contato
		agenda[i] = Contato(nome , telefone, email);
		
		cin.get();
	}


//visualizar
		for(int i=0; i<=2; i++){
		
		cout << agenda[i].getNome() << endl;
		cout << agenda[i].getTelefone() << endl;
		cout << agenda[i].getEmail() << endl;
	}
		
		
			
	return 0;
}
