vector<Viatura> frota;

void adicionar(){
	string marca;
	string modelo;
	string matricula;
	
	cout << "Introduza a marca: ";
	cin >> marca;
	cout << "Introduza o modelo: ";
	cin >> modelo;
	cout << "Introduza a matricula: ";
	cin >> matricula;
	
	frota.push_back(Viatura(marca, modelo, matricula));
}

void ver(){
	system("cls");
	cout << "Viaturas Existentes ------------------------" << endl;
	
	for(int i=0; i<frota.size(); i++){
		cout << frota.at(i).getMarca() << endl;
		cout << frota.at(i).getModelo() << endl;
		cout << frota.at(i).getMatricula() << endl;
		cout << frota.at(i).getEstado() << endl;
		cout << frota.at(i).getKm() << endl;
		cout << frota.at(i).getDeposito() << endl << endl;
	}
}


int pesquisar(){
	string matricula;
	cout << "Introduza a matricula a pesquisar: ";
	cin >> matricula;
	
	//percorrer vector e comparar matriculas
	for(int i=0; i<frota.size(); i++){
		if(frota.at(i).getMatricula() == matricula){
			return i;
		}
	}
	
	return -1;
}

void editar(){
	int indice = pesquisar();
	
	if(indice >= 0){
		string marca;
		string modelo;
		cout << "Introduza a nova marca: ";
		cin >> marca;
		cout << "Introduza o novo modelo: ";
		cin >> modelo;
		
		frota.at(indice).setMarca(marca);
		frota.at(indice).setModelo(modelo);
	}else{
		cout << "Viatura nao encontrada!" << endl;
	}
}

void eliminar(){
	int indice = pesquisar();
	
	if(indice >=0){
		frota.erase(frota.begin() + indice);
	}else{
		cout << "Viatura nao encontrada!" << endl;
	}
}

void abastecer(){
	int indice = pesquisar();
	
	if(indice >=0){
		double litros;
		cout << "Introduza a quantidade de combustivel: ";
		cin >> litros;
		
		frota.at(indice).abastecer(litros);
	}else{
		cout << "Viatura não encontrada!" << endl;
	}
}

void percorrer(){
	int indice = pesquisar();
	
	if(indice >=0){
		double distancia;
		cout << "Introduza a distancia: ";
		cin >> distancia;
		
		frota.at(indice).andar(distancia);
	}else{
		cout << "Viatura nao encontrada!" << endl;
	}
}

void menu(){
	int opcao;
	
	do{
		system("cls");
		cout << "1 -> Adicionar Viatura" << endl;
		cout << "2 -> Visualizar Lista" << endl;
		cout << "3 -> Editar Viatura" << endl;
		cout << "4 -> Eliminar Viatura" << endl;
		cout << "5 -> Abastecer Viatura" << endl;
		cout << "6 -> Percorrer Distancia" << endl;
		cout << "0 -> Sair" << endl << endl;
		cout << "Introduza uma opcao: ";
		cin >> opcao;
		
		switch(opcao){
			case 0: break;
			case 1: adicionar(); break;
			case 2: ver(); break;
			case 3: editar(); break;
			case 4: eliminar(); break;
			case 5: abastecer(); break;
			case 6: percorrer(); break;
			default:
				cout << "Opcao invalida!" << endl;
		}
		
		system("pause");
		
	}while(opcao != 0);
}



