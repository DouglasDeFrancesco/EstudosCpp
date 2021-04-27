#include <iostream>
using namespace std;

int soma1 (int num)
{
	int resultado;
	resultado= num+num;
	return resultado;
}


int mult (int num)
{
	int resultado;
	resultado= num*10;
	return resultado;
}

int div(int num){

	int resultado=num/2;
	return resultado;
}

int sub (int num){
	
	int resultado = num-10;
	return resultado;
}



int main() 
{
	int numero;
	cout << " digite um numero  ";
	cin >> numero;
	
	int resultado = soma1(numero);
	cout << "resultadoSoma:"<< resultado << endl;
	
	int resultado2 = mult(numero);
	cout << "resultadoMult:"<< resultado2 << endl;
	
	int resultado3 = div(numero);
	cout << "resultadodiv:" << resultado3 << endl;
	
	int resultado4 = sub(numero);
	cout << "resultadosub:" << resultado4;
	
		
	
return 0;	
}
