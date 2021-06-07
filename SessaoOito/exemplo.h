vector<Contacto> agenda;

void inserir(){
	int nrContactos;
	string nome;
	string telefone;
	string email;
	
	cout << "Quantos contactos deseja inserir? ";
	cin >> nrContactos;
	
	for(int i=1; i<=nrContactos; i++){
		cout << "Introduza o nome: ";
		cin >> nome;
		
		cout << "Introduza o telefone: ";
		cin >> telefone;
		
		cout << "Introduza o e-Mail: ";
		cin >> email;
		
		//criar contacto e adicionar o mesmo ao vector
		agenda.push_back(Contacto(nome, telefone, email));
	}
}

void ver(){
	system("cls");
	
	for(int i=0; i<agenda.size(); i++){
		cout << agenda.at(i).getNome() << endl;
		cout << agenda.at(i).getTelefone() << endl;
		cout << agenda.at(i).getEmail()<<endl << endl;
	}	
}

void editar(){
	string pesquisa;
	cout << "Introduza o nome a Editar: ";
	cin >> pesquisa;
	
	for(int i=0; i<agenda.size(); i++){
		//para cada contacto compara nome com o texto a pesquisar
		if(agenda.at(i).getNome() == pesquisa){
			//ler novos valores
			string novoNome;
			cout << "Introduza o novo Nome: ";
			cin >> novoNome;
			
			//alterar o nome
			agenda.at(i).setNome(novoNome);
			
			//parar ciclo
			break;
		}
	}
}


void eliminar(){
	string pesquisa;
	cout << "Introduza o nome a eliminar: ";
	cin >> pesquisa;
	
	for(int i=0; i<agenda.size(); i++){
		//comparar nome do objecto com texto a pesquisar
		if(agenda.at(i).getNome() == pesquisa){
			char resposta;
			cout << "Quer mesmo eliminar: '" << agenda.at(i).getNome() << "' ? [S|N] :";
			cin >> resposta;
			
			if(resposta == 'S' || resposta == 's'){
				//elimina
				agenda.erase(agenda.begin() + i);
				break;
			}
		}
	}
}






