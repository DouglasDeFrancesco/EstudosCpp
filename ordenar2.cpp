#include <iostream>
using namespace std;


/*************************************
ordenar 2 valores
1- ler 2 valores
3-listar 
************************************/


int main(int argc, char** argv) {
	
	int n1, n2;
	int aux;
	
	setlocale(LC_ALL,"");
	//ler os valores
	cout << "Nº 1 = "; cin >> n1;
	cout << "Nº 2 = ", cin >> n2;
	
	//ordenar crescentemente
	
	if(n1>n2){
		//trocar n1 com n2
		aux=n1;
		n1=n2;
		n2=aux;
	
	
	//listar
	cout << n1 << "" << n2 ;
	
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
