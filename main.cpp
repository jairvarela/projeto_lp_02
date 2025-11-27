
#include <iostream>
#include <vector>
#include "cliente.h"



int main(){



int opcao = 9999;

Clientes jair;
int qtdClientes=0;

	while(opcao>0){


			cout<< "         MENU        "<< endl;
			cout << endl;


			cout<< "1 - Cadastro de cliente"<< endl;
			cout<< "0 - Sair"<< endl;
			cout << endl;
			cout<< "Escolha uma opção: "<< endl;
			cin>>opcao;

		switch (opcao){






		case 1:

			int opcaoCad;
			cout << "         MENU CADASTRO DE CLIENTES       "<< endl;
			cout << endl;


			cout<< "1 - Inserir cliente"<< endl;
			cout<< "2 - Atualizar cliente"<< endl;
			cout<< "3 - Remover cliente"<< endl;
			cout<< "4 - Listar clientes"<< endl;

			cout <<endl<<"Escola uma opção: ";
			cin>>opcaoCad;


			switch(opcaoCad){
				case 1:


					jair.CreateCliente(qtdClientes);
					cout << jair;

					break;

			

		

				case 2:

					break;
				case 3:

					break;
				case 4:

					break;



			};
		};




	};

// for(int i = 0; i<5;i++){
// jair[i].createPessoa();
// };

// for(int i = 0; i<5;i++){
// jair[i].getPessoa();
// }

// 	return 0;
}