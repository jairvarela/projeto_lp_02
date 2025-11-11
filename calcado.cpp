
#include <iostream>
#include "menus.h"
using namespace std;


class calcados{
public:
	int Tamanho;
	string Cor;
	double Valor;
	void atualizarValorEstoque();



private:
	int ValorEstoque;
	int Qtd;
};

class Tenis:public calcados{
public:
	void getValor(){
		cout<< this->Valor;
	}
	void SetValor(){
		cin>>this->Valor;
	}


private:
	string Cor;

};

class Sapato: public calcados{
public:
	void getValor(){
		cout<< this->Valor;
	}
	string cor = "Couro";

private:
	int Valor;


};


void CreateCalc(calcados teste){
	cout<< "O que deseja Adicionar no Estoque?"<< endl;

	int opcao;
	menuADD();
	cin >> opcao ;



	switch (opcao){

		case 1:
			

			Tenis primeiro;
			primeiro.SetValor();

			break;

	}
}

int main(){

calcados teste;
CreateCalc(teste);

	return 0;
}