#include <iostream>
using namespace std;

/****************************************
condi��o: instri��o if()
if()
If() else
if() else if()
if() else if() else
************************************************/

int main(int argc, char** argv) {
	int idade;
	cout << "qual a sua idade?" << endl;
	cin >> idade;
	
	if(idade<18){ //  idade � menor que 18?
		
		cout << "� menor";// vem por aqui se a resposta for "sim"
		
	}else{
		cout << "� maior de idade" << endl; // aqui � quando a resposta � "n�o"
	}
	
	return 0;
}
