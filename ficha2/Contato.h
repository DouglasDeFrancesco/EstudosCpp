class Contato{
	private:
		string nome;
		string telefone;
		string email;
		
		
	public:
		
		Contato(){} // construtor vazio. Padrão
		
		Contato(string xNome, string xTelefone, string xEmail){
			this->nome = xNome;
			this->telefone = xTelefone;
			this->email = xEmail;
	
		}		
		
		string getNome(){ return nome;}
		void setNome(string xNome){nome = xNome;}
		
		string getTelefone(){return telefone;}
		void setTelefone(string xTelefone){telefone = xTelefone;}

		string getEmail(){return  email;}
		void setEmail(string xemail){email = xemail;}
	
	
};
