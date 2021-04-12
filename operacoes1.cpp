#include <iostream>
using namespace std;


/*********************************************
programa apara testar as operações aritméticas
**********************************************/



int main(int argc, char** argv) {
	
	int n1 = 7;
	int n2 = 2;
	int quociente, resto;
	float quocienteComVirgula;

	quociente = n1 / n2;
	cout<<"só com inteiros (divisão inteira)=" << quociente << endl;
	
	//divisão tendo vírgulas no quociente
	//coerção(type cast)-> converte o n1 a ser um float
	quocienteComVirgula = (float) n1 / n2;
	cout << "usando virgulas = " << quocienteComVirgula << endl; //3.5
	//obter o resto da divisão inteira
	resto = n1 % n2; // Lê-se "n1 mod n2"
	cout << "Resto da divisão inteira =" << resto << endl; 
	
	//operador incremento (somar 1)
	cout << "n2=" << n2 << endl;
	n2++;
	cout << "n2 incrementado=" << n2 << endl;
	
	//operadorincremento (somar 1)
    ++n2;
    cout << "n2  novamente incrementado=" << n2 << endl;
    
    // operador descrescemento (subtrair 1)
    n2--;
    cout << "se decrescer, resulta =" << n2 << endl;
    
    
    
	return 0;
}
