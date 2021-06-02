#include <iostream>
#include <cstdlib>
#include<vector>

using namespace std;


int main(int argc, char** argv) {
	
	//criar vector vazio
	vector<string> frutaria;
	
	
	//adicionar frutas ao vector
	frutaria.push_back("banana");
	frutaria.push_back("laranja");
	frutaria.push_back("morango");
	frutaria.push_back("amora");
	
	
	//ver tamanho do vector
	
	cout << frutaria.size() << endl;
	
	//aceder aos valores
	cout << frutaria.at(3) << endl; //Amora
	cout << frutaria[1] << endl; //laranja
 	
 	//carregar mais 6 frutas
 	string fruta;
 	
 	for(int i=1; i<=6 ; i++){
 		
 		cout <<"Introduza uma fruta: ";
 		cin >> fruta;
 		frutaria.push_back(fruta);
 		
	 }
	 
	 //visualizar todas as entradas
	 
	 cout << "Frutas Existentes: " << endl;
	 
	 for(int i=0; i<frutaria.size(); i++){
	 	cout << frutaria.at(i) << endl;
	 	
	 }
	 
	 //apagar uma fruta introduzida pelo utilizador
	 string frutaEliminar;
	 cout << "Intruduza o nome da Fruta e Eliminar: ";
	 cin >> frutaEliminar;
	 
	 for(int i=0; i<frutaria.size(); i++){
	 	
		 //para cada entrada, comparar nome da fruta guardada com o a eliminar
	 	if(frutaria.at(i)==frutaEliminar){
	 		
			 //eliminar entrada do vector
	 		frutaria.erase(frutaria.begin() + i);
	 		break;
		 }
	 	
	 	
	 	
	 }
	 
	 cout << "Frutas Apos Eliminar: " << endl;
	 for(int i=0; i<frutaria.size(); i++){
	 	cout << frutaria.at(i) << endl;
}
	 
	 
	
	return 0;
}
