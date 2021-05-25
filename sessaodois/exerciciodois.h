void verPares (int nr){
	nr++;
	int contador = 0;
	
	
	do{
		if(nr%2 ==0){
			
			cout << nr << endl;
			contador++;
		}
		nr++;
	} while (contador<15);
	
}
