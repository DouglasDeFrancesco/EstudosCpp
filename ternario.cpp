#include <iostream>
using namespace std;

/*****************************************
Operador ternario->(condição)? verdade: falso
É um if() com um else, tudo na mesma instrução
*******************************************/


int main(int argc, char** argv) {
	int x, y;
	
	cout<<"valor de x=";
	cin >> x;
	
/*	
	if(x>3){
		y = x+1;
	
		}
	else{
		y = x+10;
	}
*/
	
	//faz o mesmo que o bloco anterior
	
	y= (x<3) ? x+1 : x+10;



	
	cout << "y =" <<y;
	
	return 0;
}
