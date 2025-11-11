
#include <iostream>
using namespace std;


class Pessoas{
private:
	string nome;
	int QtdCompras;
	bool Fiel;
	int ID;
	int qtdClientes;
	

public:

	Pessoas(){};
	~Pessoas(){};
	void getPessoas();
	void setNome(string nome);
	void setQtdCompras(int QtdCompras);
	void TesteFidelidade();

	friend ostream& operator<<(ostream&, const Pessoas&);
	
};







class Cliente : public Pessoas{
private:
	int ID;


public:
	Cliente(){};
	~Cliente(){};
	void setID(int ID);


};
