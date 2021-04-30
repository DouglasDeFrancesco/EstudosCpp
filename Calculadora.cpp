#include <iostream>
#include <iomanip>
using namespace std;

/*************************************
	Calculadora:
		Somar
		Subtrair
		Multiplicar
		Dividir
	Usar fun��es
**************************************/

void MostraMenu(){
	
	system("cls");
	cout << "\n********************\n"
		 << "* + -> Somar       *\n"
		 << "* - -> Subtrair    *\n"
		 << "* * -> Multiplicar *\n"
		 << "* / -> Dividir     *\n"
		 << "* t -> Terminar    *\n"
		 << "********************\n";
}


char PedirEscolha(){
	char escolha;
	
	cout << "Escolha uma opera��o: ";
	cin >> escolha;
	return escolha;
}


void LerValores(float &v1, float &v2){ // os par�metros s�o de sa�da
	
	cout << "1� operando = "; cin >> v1;
	cout << "2� operando = "; cin >> v2;
}


float Somar(float v1, float v2){
	return v1+v2;
}


float Subtrair(float v1, float v2){
	return v1-v2;
}


float Multiplicar(float v1, float v2){
	return v1*v2;
}


bool Dividir(float v1, float v2, float &res){
	if(v2==0){
		return false;
	}else res = v1/v2;
	return true;
}


void EscreveResultado(float valor){
	cout << "O resultado � " << valor << endl;
	system("pause");
}


int main(int argc, char** argv) {
	char op;
	float n1, n2;
	float res; 
	
	setlocale(LC_ALL,"");
	
	do{
		MostraMenu();
		op = PedirEscolha();
		
		switch(op){
			case '+':
			case '-':
			case '*':
			case '/':
				LerValores(n1, n2);	
		}

		// usar um switch para testar a resposta
		// e fazer a opera��o escolhida
		switch(op){
			case '+':
				res = Somar(n1, n2);
				break;
			case '-':
				res = Subtrair(n1, n2);
				break;
			case '*':
				res = Multiplicar(n1, n2);
				break;
			case '/':
				if( Dividir(n1, n2, res) ) EscreveResultado(res);
				else{
					cout << "Divis�o por 0\n";
					system("pause");
				}
				break;
			case 't':
				break;
			default:
				cout << "\n\nOp��o inv�lida\n";
				system("pause");
		}

		switch(op){
			case '+':
			case '-':
			case '*':
				EscreveResultado(res);
		}

	}while(op!='t');
	
	return 0;
}
