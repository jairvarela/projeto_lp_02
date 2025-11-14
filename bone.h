
#include <iostream>
using namespace std;


class bone{
public:
	double Valor;



private:
	int ValorEstoque;
	int Qtd;
};

class AbaReta:public bone{
public:
	void getValor();
	void SetValor();
	void getCor();
	void SetCor();
	friend ostream& operator<<(ostream&, const AbaReta&);


private:
	string Cor;

};

class Classic: public bone{
public:
	void getValor();


private:
	int Valor;

};

AddBones();
AttBones();
REmoveSapatos();