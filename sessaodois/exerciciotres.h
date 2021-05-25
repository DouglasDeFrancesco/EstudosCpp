int gerarAleatorio(){
	return rand()%6 + 1;
}

void lancarDado(int nrVezes){
	int maior = 0 ;
	int valorGerado;
	
	for(int i=1; i<=nrVezes; i++){
	    valorGerado = gerarAleatorio();	
	    
	    //ver qual dos valores é maior e fazer troca
	    if(valorGerado > maior){
	    	maior = valorGerado;
		}
		
		//ver o valor que saiu
		cout << valorGerado << endl;
	}
	
	//ver o maior dos valores
	cout << "Maior dos Valores: " << maior;
}
