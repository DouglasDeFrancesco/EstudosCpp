#include <iostream>
using namespace std;

/****************************************
condição: instrição if()
if()
If() else
if() else if()
if() else if() else
************************************************/

int main(int argc, char** argv) {
	int idade;
	cout << "qual a sua idade?" << endl;
	cin >> idade;
	
	if(idade<18){ //  idade é menor que 18?
		
		cout << "è menor";// vem por aqui se a resposta for "sim"
		
	}else{
		cout << "É maior de idade" << endl; // aqui é quando a resposta é "não"
	}
	
	return 0;
}
