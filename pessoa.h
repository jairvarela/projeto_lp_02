#pragma once
#include <iostream>
using namespace std;


class Pessoas{
private:
	string nome;
	int cpf;
	

public:

	Pessoas(){};
	~Pessoas(){};
	void getPessoa();
	void getNome();
	void getCPF();
	void setNome(string nome);
	void setcpf(int cpf);

	void createPessoa();




	friend ostream& operator<<(ostream&, const Pessoas&);
	
};