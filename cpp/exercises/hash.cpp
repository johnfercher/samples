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

using namespace std;

/*
	Jogador 1 - 88 - X
	Jogador 2 - 79 - O
*/

class Velha
{
private:
	char jogo[3][3];
public:
	Velha(){
		int add = 0;

		// Exemplo de Execucao, for(i = 0) e for(j = 0), jogo[i][j] = 0+0+48+1, isso em Char = '1';
		for(int i = 0 ; i < 3 ; i++){
			for(int j = 0 ; j < 3 ; j++){
				jogo[i][j] = j+add+48+1;  
			}
			add += 3;
		}
	}
	~Velha(){}

	// Metodo responsavel por mostrar o jogo
	void mostraVelha(){
		for(int i = 0 ; i < 3 ; i++){
			for(int j = 0 ; j < 3 ; j++){
				cout << " " << jogo[i][j]; 
			}
			cout << endl;
		}	
	}

	// Metodo que insere X ou O na matriz, se a jogada por OK retorna TRUE se não FALSE
	bool insere(char escolha, char jogador){
		bool jogadaOk = false;
		
		for(int i = 0 ; i < 3 ; i++){
			for(int j = 0 ; j < 3 ; j++){
				if(jogo[i][j] == escolha){
					jogo[i][j] = jogador;
					jogadaOk = true;
				}
			} 
		}

		return jogadaOk;
	}

	// Metodo que verifica se há algum vencedor, se X retorna 1, se O retorna 2, se VELHA retorna 3
	int alguemVenceu(int i){
		int vencedor = 0;

		bool alguem = false;
		if
		(
			jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
			jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
			jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X' ||

			jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
			jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
			jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X' ||
			
			jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X' ||
			jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X' 
		){
			vencedor = 1;
		}else
		if
		(
			jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
			jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
			jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O' ||

			jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O' ||
			jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O' ||
			jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O' ||
			
			jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O' ||
			jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O' 
		){
			vencedor = 2;
		}

		if(i > 8){
			vencedor = 3;
		}

		return vencedor;
	} 
};

int main(int argc, char const *argv[])
{
	Velha v;
	bool venceu = false;		// Verifica se há algum vencedor
	bool vezJogador = true;		// Alterna a vez dos jogadores
	char jogador1 = 'X';
	char jogador2 = 'O';
	char escolha;				// Escolha da posicao
	int jogadas = 0, venceuINT = 0;

	while(!venceu){
		system("clear");
		v.mostraVelha();

		if(vezJogador){
			cout << endl << "Escolha uma casa Jogador X -> ";
			cin >> escolha;
			
			// Se a jogada por OK passa a vez
			if(v.insere(escolha, jogador1)){
				vezJogador = !vezJogador;
				jogadas++;
			}
		}else{
			cout << endl << "Escolha uma casa Jogador O -> ";
			cin >> escolha;

			// Se a jogada for OK passa a vez
			if(v.insere(escolha, jogador2)){
				vezJogador = !vezJogador;
				jogadas++;
			}
		}

		// Verifica se o Jogador X ou O venceu
		venceuINT = v.alguemVenceu(jogadas);
		if(venceuINT == 1){
			system("clear");
			cout << "Jogador X Venceu !" << endl;
			venceu = true;
		}else
		if(venceuINT == 2){
			system("clear");
			cout << "Jogador O Venceu !" << endl;
			venceu = true;
		}else
		if(venceuINT == 3){
			system("clear");
			cout << "Deu Velha !" << endl;
			venceu = true;
		}
	}
	return 0;
}