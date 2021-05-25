#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "exerciciodois.h"
#include "exerciciotres.h"

int main(int argc, char** argv) {
	//teste exercicio b----
	
	/*
	
		int v;
	cout << " Introduza um valor:";
	cin >> v;
	
	verPares(v);
	
	
	cout << " Introduza um valor:";
	cin >> v;
	
	verPares(v);
	*/
	
	srand(time(0));
	int nr;
	cout << "Quantas vezes quer lançar o dado? ";
	cin >> nr;
	lancarDado (nr);
	

	
	return 0;
	
}
