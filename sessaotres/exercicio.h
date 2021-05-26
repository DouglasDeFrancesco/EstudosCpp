//dados globais----------------

struct produto{
		string nome;
		double preco;
	};

produto compras[10];
//funcoes-----------

void comprar (){
		for(int i=0; i<=9; i++){
			cout << "Introduza o nome para o " << (i+1) << "o produto: ";
			cin >> compras[i].nome;
			
			cout << "Introduza o preco para o " << (i+1) << "o produto: ";
			cin >> compras[i].preco;
		}	
}



void pagar(){
	double total =0;
	for(int i=0; i<=9; i++){
		cout << compras[i].nome;
		cout << compras[i].preco;
		total = total + compras[i].preco;
		
	}
	cout << "O total a pagar e de " << total << "euros!" << endl;
		system("pause");
}


	

