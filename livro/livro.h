class Livro{
	
	private:
		
	string titulo;
	string autor;
	string genero;
	string localizacao;
	string estado; 
	
	
	
	public:
		Livros(){}
		
		Livro(string titulo, string autor, string genero, string localizacao){
			
			this->titulo;
			this->autor;
			this->genero;
			this->localizacao;
			estado = "livre";		
		}
		
		
		string getTitulo(){return titulo;}
		string getAutor(){return autor;}
		string getGenero(){return genero;}
		string getLocalizacao(){return localizacao;}
		string getEstado(){return estado;}
		
		
		
		
		void setTitulo(string valor){titulo = valor;}
		void setAutor(string valor){autor = valor;}
		void setGerero(string valor){genero = valor;}
		void setEstado(string valor){estado = valor;}
		
		
		void reservar(){
			if(estado == "livre"){
			estado= "reservado";	
				
			}else{
				cout << "Imnpossivel reservar o livro ' " << titulo << endl;
			}
		}
		
		void emprestar(){
			if(estado == "livre"|| estado == "reservado"){
				estado = "emprestado";
				}else{
					
					
				 
				cout << "impossivel emprestar o Livro '" << titulo <<  "' ! " << endl;
				
			}
		}
		
		void devolver (){
			if(estado == "emprestado"){
			   estado = " livre";
			  
			}else 
			cout << "o livro '" << " ' não se encontra emprestado ! " << endl;
		}
	
	
	
	void setLocalizacao(string valor){
		if(estado == "livre"){
			localizacao = valor;
		}else{
			cout << "O livro '" << titulo << "' nao se encontra livre !" << endl;
		}
	}
	
	
	
	
	
};
