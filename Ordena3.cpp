#include <iostream>
using namespace std;

/*************************************
	Ordenar 3 valores crescentemente
**************************************/
	
int main(int argc, char** argv) {
	int n1, n2, n3, aux;
	
	// ler os 3 valores
	cout << "n1="; cin >> n1;
	cout << "n2="; cin >> n2;
	cout << "n3="; cin >> n3;
	
	// ordenar
	if(n1>n2){
		aux=n1;
		n1=n2;
		n2=aux;
	}
	// chegado aqui, n1 tem o menor dos 2
	
	if(n2>n3){
		aux=n2;
		n2=n3;
		n3=aux;
	}
	// chegado aqui, n3 tem o maior dos 3
	
	if(n1>n2){
		aux=n1;
		n1=n2;
		n2=aux;
	}
	// estão ordenados
	
	// escrever resultado
	cout << "Valores ordenados\n";
	cout << "n1=" << n1;
	cout << "\nn2=" << n2;
	cout << "\nn3=" << n3;

	return 0;
}
