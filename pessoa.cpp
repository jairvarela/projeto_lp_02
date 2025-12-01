	
#include <iostream>
#include "pessoa.h"



	string Pessoas::getNome() const{
		return this->nome;
	}
	long long Pessoas::getCPF() const{
		return this->cpf;
	}

	void Pessoas::getPessoa(){
		cout << this->nome << endl << this->cpf << endl;
	}

	void Pessoas::setNome(string nome){
		this->nome = nome;
	}
	void Pessoas::setcpf(int cpf){
		this->cpf = cpf;
	}


	void Pessoas::createPessoa(){
		cout<< "Insira o nome da pessoa: ";
		string nome;
		cin>> nome;
		setNome(nome);


		cout<<endl<<"insira o cpf: ";

		int cpf;
		cin>>cpf;
		setcpf(cpf);
	}

	ostream &operator<<(ostream& saida, const Pessoas& pessoa){
	saida << "Nome: " + pessoa.nome + "\n" + "CPF: " + to_string(pessoa.cpf) + "\n";
	return saida;
}
