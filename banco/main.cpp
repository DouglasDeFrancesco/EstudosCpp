#include <iostream>
#include <cstdlib>

using namespace std;

//variaveis globais
double extra = 0.05;

double calcIva(double preco){
	double taxa= 0.23 + extra;
	return preco * taxa;
}

double calcDesconto(double preco){
	double taxa = 0.15 + extra;
	return preco * taxa;
}


int main(int argc, char** argv) {
	int valor;
	cout << "introduza o valor: ";
	cin >> valor;
	
	cout << calcIva(valor) << endl;
	cout << calcDesconto(valor);
	
	return 0;
}
