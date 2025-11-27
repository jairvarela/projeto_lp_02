#pragma once

#include "pessoa.h"






class Clientes : public Pessoas{
private:
	int ID=0;
	// int QtdCompras;
	// bool Fiel;
	// int qtdClientes;


public:
	Clientes(){};
	~Clientes(){};

	void CreateCliente(int ID);
	void setID(int ID);
	// void getPessoas();
	// void setNome(string nome);
	// void setQtdCompras(int QtdCompras);
	// void TesteFidelidade();
	friend ostream& operator<<(ostream&, const Clientes&);

};



