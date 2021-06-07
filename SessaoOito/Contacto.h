class Contacto{
	private:
		string nome;
		string telefone;
		string email;
		
	public:
		Contacto(){	} //construtor vazio. Padrão
		
		Contacto(string nome, string telefone, string email){
			this->nome = nome;
			this->telefone = telefone;
			this->email = email;
		}
		
		
		string getNome(){return nome;}
		void setNome(string xNome){nome = xNome;}
		
		string getTelefone(){return telefone;}
		void setTelefone(string xTelefone){telefone = xTelefone;}
		
		string getEmail(){return email;}
		void setEmail(string xEmail){email = xEmail;}
		
};
