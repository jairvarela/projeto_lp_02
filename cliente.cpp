
#include <iostream>
#include "cliente.h"





ostream& operator<<(ostream& saida, const Clientes& cliente){

	saida <<"Nome: " + cliente.getNome() + "\n" + to_string(cliente.getCPF()) + "Compras feitas.";
	return saida;
}

// class Clientes : public Pessoas{
// private:
// 	int ID=0;
// 	// int QtdCompras;
// 	// bool Fiel;
// 	// int qtdClientes;


// public:
	// Clientes(){};
	// ~Clientes(){};


	void Clientes::setID(int ID){
		this->ID = ID+1;
	}
		// void getPessoas();
		// void setNome(string nome);
		// void setQtdCompras(int QtdCompras);
		// void TesteFidelidade();




	void Clientes:: CreateCliente(int ID){

		cout<< "Insira o nome da pessoa: ";
		string nome;
		cin>> nome;
		setNome(nome);

		cout<<"insira o cpf: "<< endl;
		int cpf;
		cin>>cpf;
		setcpf(cpf);
		setID(ID+1);



		}

// };



