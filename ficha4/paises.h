vector<string> paises;


void inserir(){
	//introduzir nome dos paises
	string nome;
	cout << "Introduza o pais: ";
	cin >> nome;
	paises.push_back(nome);

	
	
}
void ver(){
	cout << endl << "Paises Introduzidos: " << endl;
	
	for(int i=0; i<paises.size(); i++){
	cout << paises.at(i) << endl;
		
	}
	
}


void apagar(){
	string nome;
	cout << "Introduza o pais e eliminar: ";
	cin >> 	nome;
	
	
	//encontar nome do pais a eliminar no vector
	
	for(int i=0; i<paises.size(); i++){
		if(paises.at(i) == nome){
			paises.erase(paises.begin() + 1);
			break;
		}
	}
	
	
}
void menu(){
	int opcao;
	
	do{
		system ("cls");
		cout << "1-> Inserir Pais" << endl;
		cout << "2-> Ver todos" << endl;
		cout << "3-> Apagar" << endl;
		cout << "0-> Sair" << endl;
		cout << " Introduza uma opcao :";
		cin >> opcao;
		
		switch(opcao){
			case 0: break;
			case 1: inserir(); break;
			case 2: ver(); break;
			case 3 : apagar(); break;
			default : cout << "Opcao Invalida! "<< endl;
					
			
		}
		
		
		system ("pause");
		
	}while (opcao!=0);	
	
	
	
	
}
