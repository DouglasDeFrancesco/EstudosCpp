void menu(){
	system("cls");
	
	viatura ferrari("ferrari", "F40", "CC-14-DD");
	
	int opcao;
	double valor;
	
	do{
		system("cls");
		cout << "1-> Abastacer" << endl;
		cout << "2-> Andar" << endl;
		cout << "3-> Consultar  Km " << endl;
		cout << "4-> Ver Combustivel" << endl;
		cout << "5-> Ver Estado" << endl;
		cout << "0-> Estacionar" << endl;
		cout << "Introduza uma opcao" << endl;
		
		
		cin >> opcao;
		
		switch(opcao){
			case 0: cout << "Viatura Estacionar...";
					break;
			
			case 1:
				cout << "Intruduza a Quantidade de Combustivel: ";
				cin >> valor;
				ferrari.abastacer(valor);
				break;
			
			case 2:
				cout << "Introduzir a Distancia a Percorrer";
				cin >> valor;
				ferrari.andar(valor);
				break;
				
			case 3:
				cout << "Km Percorridos:" << ferrari.getKm() << endl;
				break;
				
			case 4:
				cout << "Combustivel Disponivel : " << ferrari.getDeposito() << endl;
				break;
				
			case 5:
				cout << "Estado da Viatura:" << ferrari.getEstado() << endl;
				break;
				
			default:
				cout << "Opcao Invalida! " << endl;
				
				
				
				
		}
		
		system ("pause");
		
	}while(opcao !=0);
	
	
}
