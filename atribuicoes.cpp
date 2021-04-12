#include <iostream>
using namespace std;

/*********************************************
utilização de uma atribuição em conjunto com um operador
+=
-=
*=
/=
%=

***********************************************/



int main(int argc, char** argv) {
	
	int x;
	
	x = 3;
	x = x + 2;
	
	cout << "valor de x = " << x << endl;// 5
	
	//Este código faz o mesmo que o anterior
	// Pode-se usar += sempre que o primeiro oparando é 
	// a mesma variável onde fica o resultado 
	x=3;
	x +=2;
	
	cout<< " valor de x =" << x << endl;// 5
	
	
	
	
	return 0;
}
