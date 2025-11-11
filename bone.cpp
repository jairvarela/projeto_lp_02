
#include <iostream>
#include "bone.h"
using namespace std;

	void AbaReta::getValor(){
		cout<< this->Valor;
	}
	void AbaReta::SetValor(double valor){
		valor = this->Valor;
	}

	//void getCor(){
		

	//};
	

	//void SetCor();


	void Classic::getValor(){
		cout<< this->Valor;
	}

ostream &operator<<(ostream& saida, const AbaReta& reta){

	saida << to_string(reta.getValor) + "\n" + Cor + to;
	return saida;
}



int main(){
	return 0;
}