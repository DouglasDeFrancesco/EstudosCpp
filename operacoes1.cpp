#include <iostream>
using namespace std;


/*********************************************
programa apara testar as opera��es aritm�ticas
**********************************************/



int main(int argc, char** argv) {
	
	int n1 = 7;
	int n2 = 2;
	int quociente, resto;
	float quocienteComVirgula;

	quociente = n1 / n2;
	cout<<"s� com inteiros (divis�o inteira)=" << quociente << endl;
	
	//divis�o tendo v�rgulas no quociente
	//coer��o(type cast)-> converte o n1 a ser um float
	quocienteComVirgula = (float) n1 / n2;
	cout << "usando virgulas = " << quocienteComVirgula << endl; //3.5
	//obter o resto da divis�o inteira
	resto = n1 % n2; // L�-se "n1 mod n2"
	cout << "Resto da divis�o inteira =" << resto << endl; 
	
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
