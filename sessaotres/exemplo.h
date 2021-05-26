//dados globais----------------
struct contato{
		string nome;
		int idade;
		string email;
	};

contato agenda[10];
int contador = 0;



//funçoes-----------------

void inserir (){	


if(contador < 10){
	cout << "Introduza o Nome:";
	cin  >> agenda[contador].nome;
	
	cout << "Intruduza a idade:";
	cin >> agenda[contador].idade;
	
	cout << "Introduza o email:";
	cin >> agenda[contador].email;
	
	contador++;
	
}else 
		cout << "Impossível inser mais contatos!" << endl;


	system("pause");
	
}
	
void ver(){
	system("cls");
	
	for(int i=0; i<contador; i++){
		cout << agenda[i].nome << endl;
		cout << agenda[i].idade << endl;
		cout << agenda[i].email << endl << endl;
	}
	system ("pause");
}	

void menu(){
	
	
	int opcao;
	
	do{
		system("cls");
		cout << "MENU ############" << endl << endl;
		cout << "1 -> Inserir" << endl;
		cout << "2 -> ver" << endl;
		cout << "0 -> sair" << endl; 
		cout << "introduza a opcao: ";
		
		cin >> opcao;
		
			switch(opcao){
			
			case 0: cout << "Adeus !"; break;
			case 1: inserir(); break;
			case 2: ver (); break;
			default:
				cout << "Opcao Invalida!" << endl;
				system("pause");
		}
		
	}while (opcao !=0);
}
