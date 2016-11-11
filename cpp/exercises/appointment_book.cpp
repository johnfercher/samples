/*
 *	MIT License
 *
 *	Copyright (c) 2016 Johnathan Fercher
 *
 *	Permission is hereby granted, free of charge, to any person obtaining a copy
 *	of this software and associated documentation files (the "Software"), to deal
 *	in the Software without restriction, including without limitation the rights
 *	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *	copies of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 *	The above copyright notice and this permission notice shall be included in all
 *	copies or substantial portions of the Software.
**/

#include "iostream"
#include "cstdlib"
#include "sstream"
#include "vector"

#if defined(WIN32)
	#include "windows.h"

	void esperar(int qtd){
		Sleep(qtd*1000);
	}

	void limpar(){
		system("cls");
	}
#else
	#include "unistd.h"

	void esperar(int qtd){
		sleep(qtd);
	}

	void limpar(){
		system("clear");
	}
#endif

using namespace std;

struct Contato{
	int numero;
	string nome;
};

class Agenda
{
private:
	vector<Contato> contatos;
public:
	Agenda(){
	}
	~Agenda(){}

	void adicionaContato(Contato contato){
		contatos.push_back(contato);
	}

	void deletaContato(int numero){
		int count = 0;
		int pos;
		for(int i = 0 ; i < contatos.size() ; i++){
			if(contatos.at(i).numero == numero){
				pos = i;
				count++;
			}
		}

		if(count == 0){
			cout << "Nenhum contato com o numero " << numero << " ..." << endl;
		}else /*if(count == 1)*/{
			for(int i = pos; i < contatos.size()-1 ; i++){
				contatos.at(i) = contatos.at(i+1);
			}
			contatos.pop_back();
		}/*else if(count > 1){
			cout << "deleta varios" << endl;
		}*/
	}

	void deletaContato(string nome){

	}

	void listaContatos(){
		for(int i = 0 ; i < contatos.size() ; i++){
			cout << "Nome: " << contatos.at(i).nome << endl;
			cout << "Num: " << contatos.at(i).numero << endl;
			cout << endl;
		}
	}

	void listaContatos(int numero){
		for(int i = 0 ; i < contatos.size() ; i++){
			if(contatos.at(i).numero == numero){
				cout << "Nome: " << contatos.at(i).nome << endl;
				cout << "Num: " << contatos.at(i).numero << endl;
				cout << endl;
			}
		}
	}

	void listaContatos(string nome){
		for(int i = 0 ; i < contatos.size() ; i++){
			if(contatos.at(i).nome == nome){
				cout << "Nome: " << contatos.at(i).nome << endl;
				cout << "Num: " << contatos.at(i).numero << endl;
				cout << endl;
			}
		}
	}

	int qtdContatos(){
		return contatos.size();
	}

	bool eNumero(string s){
		stringstream ss;
		string num;
		bool eNum = false;

		for(int i = 0 ; i < 10 ; i++){
			ss << i;
			num = ss.str();
			if(num[0] == s[0]){
				eNum = true;
			}

			ss.str(string());
			ss.clear();

		}

		return eNum;
	}
};

int main(int argc, char const *argv[])
{
	Agenda a;
	Contato c;
	string busca;
	string deleta;	
	stringstream ss;
	int num;

	int escolha = 0;
	bool sair = false;

	while(!sair){
		limpar();

		cout << a.qtdContatos() << endl;
		cout << "1 - Adicionar Contato\n2 - Buscar Contato\n3 - Deletar Contato\n4 - Listar Contatos\n0 - Sair\n-> ";
		cin >> escolha;

		switch(escolha){
			case 1:
				limpar();
	
				cout << "Nome: ";
				cin >> c.nome;
				cout << "Num: ";
				cin >> c.numero;

				a.adicionaContato(c);
			break;
			case 2:
				limpar();
				
				cout << "Buscar: ";
				cin >> busca;

				if(a.eNumero(busca)){
					limpar();

					ss << busca;
					ss >> num;
				
					a.listaContatos(num); 
				}else{
					limpar();
					a.listaContatos(busca);
				}
				ss.str(string());
				ss.clear();

				esperar(1);
			break;
			case 3:
				limpar();
		
				cout << "Deletar: ";
				cin >> deleta;

				if(a.eNumero(deleta)){
					limpar();

					ss << deleta;
					ss >> num;
					a.deletaContato(num); 
				}else{
					limpar();
					a.deletaContato(deleta);
				}
				ss.str(string());
				ss.clear();
			break;
			case 4:
				limpar();
				a.listaContatos();
				esperar(4);
			break;
			case 0:
				limpar();
				sair = true;
				cout << "Fechando Agenda ..." << endl;
				esperar(1);
			break;
			default:
				limpar();
				cout << "Opcao Invalida !" << endl;
				esperar(1);
			break;
		}
	}

	return 0;
}