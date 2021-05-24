#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//protocolos--------
double multiplicador(double a, double b);
int aleatorio(){
	return rand () % 100 +1;
} 




int main(int argc, char** argv) {

srand(time(0));
for (int i=1; i<=10; i++){
	
	cout << aleatorio () << endl;
}
	multiplicador(21.5, 30.8);
	cout<< "resultado " << multiplicador(21.5, 30.8);	
	
	
	
	return 0;
	
}
double multiplicador (double a, double b){
	return a * b;
}	
	

	
