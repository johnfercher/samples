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
#include "stdio.h"
#include "math.h"

using namespace std;

class Matriz{         // Classe Matriz
private:
  int size;  
  float **A;          // Matriz A a ser alocada dinamicamente para generaliza-la em N (Matriz)
  float **I;          // Matriz I a ser alocada dinamicamente para generaliza-la em N (Indentidade)
  float *v;
  int linha, coluna;
  float alfa;         // Fator multiplicativo

public:
  Matriz(int size = 2){    
    // Construtor
    this->size = size;
    linha = coluna = size;
    
    A = new float*[linha];  // A terá "linha" quantidade de linhas
    I = new float*[linha];  // I terá "linha" quantidade de linhas
    v = new float[size];
    
    for(int i = 0; i < linha; i++){ //A e I teram "coluna" quantidade de colunas
      A[i] = new float[coluna];
      I[i] = new float[coluna];
    }

    for(int i = 0 ; i < size ; i++){
      I[i][0] = (rand()%10)+1;
      v[i] = 0;
      for(int j = 0 ; j < size ; j++){
        A[i][j] = (rand()%10)+1;
      }
    }
    
    /*A[0][0] = 1;
    A[0][1] = 2;
    A[0][2] = -2;
    A[1][0] = 2;
    A[1][1] = -3;
    A[1][2] = 1;
    A[2][0] = 3;
    A[2][1] = -1;
    A[2][2] = 3;

    I[0][0] = -5;
    I[1][0] = 9;
    I[2][0] = 8;*/
  }

  ~Matriz(){}

  // Método feito para plotar os dados no terminal
  void mostra(){
    int m = 0;
    cout << endl;
    for(int i = 0; i < linha; i++){
      printf("%.2f\t\t", I[i][0]);

      for(int j = 0 ; j < coluna ; j++){
        if(A[i][j] > 9 || A[i][j] < 0){
          m++;
        }
        printf("%.2f ", A[i][j]);
      }

      cout << endl;
      m = 0;
    }    
  }

  // Algoritmo que zera os valores da matriz para torna-la uma triangular superior
  void zeros(){
    float alfa;
    // percorre as linhas
    for(int i = 0 ; i < size ; i++){
      pivoteia(i);
      mostra();
      // percorre as colunas onde elas são inicializadas iguais a linha atual
      for(int j = i+1 ; j < size ; j++){
        // calcula um alfa para multiplicar uma linha e zerar outra
        if(A[j][i] != 0 && A[i][i] != 0){
          alfa = A[j][i]/A[i][i];
          operaLinhas(j, i, -alfa);
        }
      }
    }

  }

  // Opera linhas
  void operaLinhas(int recebe, int opera, float escalar = 0){
    // Se o escalar é diferente de 0
    if(escalar != 0){
      // O algoritmo soma as linhas multiplicadas por um escalar
      for(int i = 0 ; i < linha ; i++){
        A[recebe][i] += A[opera][i]*escalar;
        I[recebe][i] += I[opera][i]*escalar;
      }
      //cout << "Linha" << recebe+1 << " += Linha" << opera+1 << " * " << escalar << endl;
    // Se o escalar é igual a 0
    }else{
      // O algoritmo simplesmente soma as linhas
      for(int i = 0 ; i < linha ; i++){
        A[recebe][i] -=  A[opera][i];
        I[recebe][i] -= I[opera][i];
      }
       //cout << "Linha" << recebe+1 << " -= Linha" << opera+1 << endl;
    }
  }

  void resolve(){
    float ac;
    cout << endl;
    for(int n = size-1 ; n >= 0 ; n--){
      ac = I[n][0];

      if(n != size-1){
        for(int i = n+1 ; i < size ; i++){
          ac -= A[n][i]*v[i];
        }
      }

      v[n] = ac/A[n][n]; 
      cout << "v[" << n << "]\t" << v[n] << endl;
    }
  }

  void pivoteia(int id){
    float maior = A[id][id];
    int m = id;
    float t;  // auxilio para trocar as linhas

    // Procura o maior valor da primeira coluna em todas as linhas e armazena o ID
    for(int i = 1 ; i < size ; i++){
      if(fabs(A[i][id]) > fabs(maior) && i > id){
        m = i;
        maior = A[i][id];
      }
    }

    // Troca as colunas com ajuda do vetor T
    if(m != id){
      for(int i = id ; i < size ; i++){
        t = A[m][i];
        A[m][i] = A[id][i];
        A[id][i] = t; 
      }
      t = I[m][0];
      I[m][0] = I[id][0];
      I[id][0] = t;
    }
  }
};

int main(){
  srand(time(NULL));
  int size;

  cout << "Insira a quantidade de linha x colunas do sistema linear a ser resolvido: " << endl << "-> ";
  cin >> size;

  Matriz m(size);

  cout << endl <<"inicial";
  m.mostra();
  
  m.zeros();
  cout << endl << "final";
  m.mostra();

  m.resolve();
}