
#include <iostream>
#include "cliente.h"
using namespace std;



	void Pessoas::getPessoas(){
		cout << nome << endl << QtdCompras << endl;
		if(Fiel == true){
			cout << "Cliente Fiel, com 10% de desconto" << endl;
		};
	}

	void Pessoas::setNome(string nome){
		this->nome = nome;
	}
	void Pessoas::setQtdCompras(int QtdCompras){
		this->QtdCompras = QtdCompras;
	}
	void Pessoas::TesteFidelidade(){
		if(this->QtdCompras >=3 ){
			this->Fiel = 1;
		};


	}

ostream &operator<<(ostream& saida, const Pessoas& pessoa){
	if(pessoa.Fiel){
	saida << pessoa.nome + "\n" + to_string(pessoa.QtdCompras) + " Compras feitas." + "\n" + "Cliente Fiel, com 10% de desconto"+ "\n"; 
	return saida;
	}
	saida << pessoa.nome + "\n" + to_string(pessoa.QtdCompras) + "Compras feitas.";
	return saida;
}







	void Cliente::setID(int ID){
		this->ID = ID;
	}





int main(){

	int contagem = 0;

	Pessoas Jair;

	Jair.setNome("Jair");
	Jair.setQtdCompras(3);
	Jair.TesteFidelidade();

	//Jair.getPessoas();

	cout << Jair;



	return 0;
}