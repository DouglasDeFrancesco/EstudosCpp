class Viatura{
	private:
		string marca;
		string modelo;
		string matricula;
		string estado;
		double km;
		double deposito;
	
	public:
		Viatura(){}
		
		Viatura(string marca, string modelo, string matricula){
			this->marca = marca;
			this->modelo = modelo;
			this->matricula = matricula;
			estado = "parado";
			km = 0;
			deposito = 0;
		}
		
		string getMarca(){return marca;}
		string getModelo(){return modelo;}
		string getMatricula(){return matricula;}
		string getEstado(){return estado;}
		double getKm(){return km;}
		double getDeposito(){return deposito;}
		
		void setMarca(string valor){marca = valor;}
		void setModelo(string valor){modelo = valor;}
		void setMatricula(string valor){matricula = valor;}
		void setEstado(string valor){estado = valor;}
		
		void abastecer(double combustivel){
			if((deposito + combustivel) <= 30){
				deposito = deposito + combustivel;
				cout << "Viatura Abastecida com " << combustivel << " litros!" << endl;
			}else{
				cout << "Impossivel Abastecer!" << endl;
			}
		}
		
		void andar(double distancia){
			if((distancia * 0.45) <= deposito){
				km = km + distancia;
				deposito = deposito - (distancia * 0.45);
				estado = "Em andamento...";
				cout << "A percorrer " << distancia << "km..." << endl;
			}else{
				cout << "Combustivel insuficiente! Necessario Abastecer!" << endl;
			}
		}
		
};







