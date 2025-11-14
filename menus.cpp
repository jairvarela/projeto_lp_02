
#include <iostream>
#include "menus.h"
#include <cstdlib>
#include <vector>
#include <string>



using namespace std;



void menuGeral(){

	cout<<endl;
	cout<< "Escolha uma opção:"<<endl;
	cout << "1 - Estoque"<< endl << "2 - Cadastro de Cliente"<< endl<<"3 - Imprimir Estoque"<<endl<< "4 - Imprime Base Clientes"<<endl<<"5 - Limpar Base" <<endl;
	//cout << "1 - Adicionar estoque Boné"<< endl << "2 - Sapato" << endl << "3 - Bone Aba Reta"<< endl << "4 - Bone Classico"<< endl << "5 - Cadastro de Cliente"<< endl;
};
void menuADD(int *qtdClientes, int *qtdBones, int *qtdSapatos){
	system("clear");
	int opcao;
	cout<< "Escolha uma opção:"<<endl;

	cin>>opcao;
	cout << "1 - Sapatos"<< endl << "2 - Bonés"<< endl;
	switch(opcao){
	case 1:
		AddCalc(&qtdSapatos);
		//AddSapatos();
		break;
	case 2:
		//AddBones();
		break;

	};	
};

void menuEstoqueSapatos(){
	system("clear");
	cout<< "Escolha uma opção:"<<endl;
	cout << "1 - Adicionar Tenis"<< endl << "2 - Adicionar Sapato" << endl<< "3 - Remover Estoque";
};
void menuEstoquebones(){
	system("clear");
	cout<< "Escolha uma opção:"<<endl;
	cout << "1 - Tenis"<< endl << "2 - Sapato" << endl << "3 - Bone Aba Reta"<< endl << "4 - Bone Classico"<< endl << "5 - Cadastro de Cliente"<< endl;
};
void menuCadastros(int *qtdClientes, Pessoa *clientes){

	cout<< "Escolha uma opção:"<<endl;
	cout << "1 - Cadastrar clientes Novo"<<endl<< "2 - Atualizar Cliente"<< endl << "3 - Remover Clientes" << endl;
	int opcao=0;
	cin >> opcao;
	system("clear");

	string Xientes;
	switch(opcao){
		case 1:{

			//int numero = (*qtdClientes);
			clientes[*qtdClientes].setNome(menuCadNew(*qtdClientes));

			clientes[*qtdClientes]=Xientes;
			*qtdClientes= (*qtdClientes)+1;
			cout << *qtdClientes;
		

			break;
}
		case 2:{
			int testado=0;
			int i=1;
			cout << "Selecione o cliente para Modificar"<<endl;
			for(int i=0;i<=(*qtdClientes);i++){
	
					cout <<i<<"- " <<clientes[i]<< endl<<endl;

				};
			cin >> testado;
			clientes[i]=menuCadNew(testado);
			break;
}
		case 3:{

			int remov=0;
			int i=1;
			cout << "Selecione o cliente para remover"<<endl;
			for(i=0;i<=(*qtdClientes);i++){
	
					cout <<i<<"- " <<clientes[i]<< endl<<endl;

				};
			cin >> remov;
			clientes[remov]="";
			*qtdClientes= (*qtdClientes)-1;
			break;

	};	

}

};

string menuCadNew(int numero){
	system("clear");
	
	cout<<"Digite o nome do cliente:"<<endl;
	string novo;
	cin>>novo;
	numero++;
    
    return novo;
};

void menuModTenis(){
	system("clear");
	cout<< "Escolha uma opção:"<<endl;
	cout << "1 - Insira Valor de Venda:"<< endl << "2 - Insira Tamanhos" << endl<< "3 - Quantidade" << endl;
};


/*void criarBase(){
	string vector<string> clientes;
	string novo;
	cout<<"Digite o nome do cliente:"<<endl;
	cin>>novo;
	clientes[numero] = novo;


}*/



int main(){

int i = 1;
Pessoa clientes[10];
calcados pes[2];
int qtdClientes=0;
int qtdSapatos=0;
//int qtdBones=0;
int opcao=1;


	while(opcao>0){
	menuGeral();
	cout<< "Escolha uma opção:"<<endl;
	cin >> opcao;

		switch(opcao){

			case 0:
				break;
			case 1:
				
				menuADD(&qtdClientes, &qtdBones, &qtdSapatos, pes);
				break;
			case 2:


				menuCadastros(&qtdClientes, clientes);



				break;
			case 3:	
				break;
			case 4:
				for(i=0;i<=qtdClientes;i++){
					cout << clientes[i]<< endl<<endl;
				};
				
				break;
			//case 5 :
				//break;


		};	
	};

	return 0;
}