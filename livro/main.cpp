#include <iostream>
#include <cstdlib>

using namespace std;

#include "livro.h"



int main(int argc, char** argv) {
	
	Livro maias("Os maias", "Eca", "Romance", "G45");
	
	maias.reservar();
	maias.reservar();
	maias.setLocalizacao("H13");
	
	
	
	
	
	
	
	
	return 0;
}
