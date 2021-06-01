class viatura{
	
	private:
		string marca;
		string modelo;
		string matricula;
		double km;
		double deposito;
		string estado;
		
		
		
		
	public:
		viatura(){}//construtor vazio. padrão
		
		
		viatura(string Marca, string modelo,
		string matricula){
		
		
		this->marca = marca;
		this->modelo = modelo;
		this->matricula = matricula;
		estado ="parado";
		km =0;
		deposito = 0;
		
		
		}
		
			string getMarca(){return marca;}
			void setMarca(string valor){marca = valor;}
			
		
			string getModelo(){return modelo;}
			void setModelo(string valor){modelo = valor;}
			
		
			string getMatricula(){return matricula;}
			void setMatricula(string valor){matricula = valor;}


			string getEstado(){return estado;}
			void setEstado(string valor){estado = valor;}
			
			double getDeposito(){return deposito;}
			

			double getKm(){return km;}
		
		
		void abastacer(double combustivel){
			if((deposito + combustivel) <=30){
				deposito = deposito + combustivel;
				cout << " viatura abastecida com " << combustivel << "litros!" << endl;
						
			}else{
				cout << "Impossivel abastecer" << endl;
				
			}
		}
		void andar(double distancia){
			if((distancia *0.45) <= deposito){
				km = km + distancia;
				deposito = deposito - (distancia * 0.45);
				estado = "Em andamento.....";
				cout << "A percorrer" << distancia << "Km...";
			}else{
				cout << "Combustivel Insuficiente ! Necessario Abastecer! " << endl;
				
			}
		}
		
	
		
			
};
