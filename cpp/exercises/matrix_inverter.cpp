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

#define size 4        // Constante que define o numero de colunas e linhas
#define mat 1         // Constante que define a matriz a ser invertida

using namespace std;

class Matriz{         // Classe Matriz
private:
  float **A;          // Matriz A a ser alocada dinamicamente para generaliza-la em N (Matriz)
  float **I;          // Matriz I a ser alocada dinamicamente para generaliza-la em N (Indentidade)
  int linha, coluna;
  float alfa;         // Fator multiplicativo

public:

  Matriz(){           // Construtor
    linha = coluna = size;
    
    A = new float*[linha];  // A terá "linha" quantidade de linhas
    I = new float*[linha];  // I terá "linha" quantidade de linhas
    
    for(int i = 0; i < linha; i++){ //A e I teram "coluna" quantidade de colunas
      A[i] = new float[coluna];
      I[i] = new float[coluna];
    }

    for(int i = 0; i < linha; i++){ // Inicia a matriz indentidade com 1 onde i = j e 0 onde não é
      for(int j = 0 ; j < coluna ; j++){
        if(i == j){
          I[i][j] = 1;
        }else{
          I[i][j] = 0;
        }
      }
    }

    /*
     *  Algumas matrizes testadas, o algoritmo foi construido de modo que
     *  se é possível inverter matrizes 2x2 e 3x3, também é possivel inverter
     *  matrizes 4x4 NxN.
     */
    #if (size == 2)
      #if (mat == 1)
        A[0][0] = 3;
        A[0][1] = 2;
        A[1][0] = 7;
        A[1][1] = 5;
      #endif
      #if (mat == 2)
        A[0][0] = 1;
        A[0][1] = -1;
        A[1][0] = -2;
        A[1][1] = 3;
      #endif
      #if (mat == 3)
        A[0][0] = 2;
        A[0][1] = 3;
        A[1][0] = 1;
        A[1][1] = 2;
      #endif
    #endif
    #if (size == 3)
      #if (mat == 1)
        A[0][0] = -40;
        A[0][1] = 16;
        A[0][2] = 9;
        A[1][0] = 13;
        A[1][1] = -5;
        A[1][2] = -3;
        A[2][0] = 5;
        A[2][1] = -2;
        A[2][2] = -1;
      #endif
      #if (mat == 2)
        A[0][0] = 1;
        A[0][1] = 2;
        A[0][2] = 3;
        A[1][0] = 0;
        A[1][1] = 1;
        A[1][2] = 4;
        A[2][0] = 5;
        A[2][1] = 6;
        A[2][2] = 0;
      #endif
      #if (mat == 3)
        A[0][0] = -24;
        A[0][1] = 18;
        A[0][2] = 5;
        A[1][0] = 20;
        A[1][1] = -15;
        A[1][2] = -4;
        A[2][0] = -5;
        A[2][1] = 4;
        A[2][2] = 1;
      #endif
    #endif
    #if (size == 4)
      #if (mat == 1)
        A[0][0] = 1;
        A[0][1] = 2;
        A[0][2] = 3;
        A[0][3] = 0;
        A[1][0] = 0;
        A[1][1] = 1;
        A[1][2] = 4;
        A[1][3] = 0;
        A[2][0] = 5;
        A[2][1] = 6;
        A[2][2] = 0;
        A[2][3] = 0;
        A[3][0] = 2;
        A[3][1] = 3;
        A[3][2] = 4;
        A[3][3] = 1;
      #endif
      #if (mat == 2)
        A[0][0] = -24;
        A[0][1] = 18;
        A[0][2] = 5;
        A[0][3] = 0;
        A[1][0] = 20;
        A[1][1] = -15;
        A[1][2] = -4;
        A[1][3] = 0;
        A[2][0] = -5;
        A[2][1] = 4;
        A[2][2] = 1;
        A[2][3] = 0;
        A[3][0] = -2;
        A[3][1] = 1;
        A[3][2] = 0;
        A[3][3] = 1;
      #endif
    #endif
  }

  ~Matriz(){}

  // Método feito para plotar os dados no terminal
  void mostra(){
    cout << endl;
    for(int i = 0; i < linha; i++){
      for(int j = 0 ; j < coluna ; j++){
        cout << A[i][j] << "  ";
      }

      cout << "\t";

      for(int j = 0 ; j < coluna ; j++){
        cout << I[i][j] << "  ";
      }

      cout << endl;
    }    
  }

  // Método central para interver a matriz
  void inverte(){
    while(!EI()){ // Enquanto a matriz A não é a identidade
      zeros();    // Zera oque não está em i = j
      diagonal(); // Transforma em 1 oque está em i = j
      mostra();   // Mostra oque foi feito no terminal
      cout << endl; 
    }
  }

  // Transforma em 1 oque está em i = j
  void diagonal(){
    // é adimitido apenas inverter uma linha por loop do programa
    bool inverteu = false; 
    // Percorre a matriz
    for(int i = 0 ; i < linha && !inverteu; i++){
      // Se o valor de Aii != 1, inverte
      if(A[i][i] != 1 && !inverteu){
        // Procura nas linhas diferente de onde o algoritmo achou um número da diagonal
        // diferente de 1
        for(int j = 0 ; j < linha && !inverteu; j++){
          // Verifica se não está procurando na mesma linha da diagonal diferente de 1
          if(i != j && A[j][i] != 0 && !inverteu){
            // Alfa é o valor que multiplicado pela linha somando a linha a zera
            alfa = (1 - A[i][i])/A[j][i];
            
            int alfaint = alfa;

            if(alfa == alfaint){
              // Troca as linhas
              operaLinhas(i, j, alfa);
              inverteu = true; // Trava o tratamento de diagonal
            }
          }
        }
      }
    }
    // Verifica se existe uma linha cuja todos os elementos são 0 e há um único elemento negativo
    inverteLinha();
  }

  // Algoritmo que zera os valores da matriz cujo i != j
  void zeros(){
    int zI, zJ;
    // é adimitido apenas zerar um termo na matriz por ver
    bool inverteu = false;
    // Varre a matriz procurando termos com id i != j cujo valor seja diferente de 0
    for(int j = 0 ; j < linha && !inverteu; j++){
      for(int i = 0 ; i < linha && !inverteu; i++){
        // Caso valor de Aij seja diferente de 0
        if(i != j && A[i][j] != 0 && !inverteu){
          zI = i;
          zJ = j;
          
          // Busca na matriz uma linha diferente da achada um termo diferente de 0 para opera-la
          for(int k = 0 ; k < linha && !inverteu; k++){
            // Caso a linha que foi achada para operar seja diferente da mesma a ser operada
            if(zI != k && A[k][j] != 0 && !inverteu){
              // Fator multiplicativo para zerar o termo na matriz
              alfa = - A[zI][zJ]/A[k][j];
              int alfaint = alfa;

              if(alfa == alfaint){
                // Opera linhas
                operaLinhas(zI, k, alfa);
                inverteu = true;
              }
            }
          }
        }
      }
    }
    // Verifica se existe uma linha cuja todos os elementos são 0 e há um único elemento negativo
    inverteLinha();
  }

  void inverteLinha(){
    // Varre a matriz em busca de uma linha cujo todos os termos são zero e a diagonal seja um termo
    // negativo para invertelo
    for(int i = 0 ; i < linha ; i++){
      bool inverte = true;
      for(int j = 0 ; j < linha ; j++){
        //Verifica de todos os termo com indice i != j são 0
        if(i != j){
          if(A[i][j] != 0){
            inverte = false;
            break;
          }
        // e Verifica se o termo da diagonal é negativo
        }else{
          if(A[i][j] != -1){
            inverte = false;
            break;
          }
        }
      }

      // Caso realmente a matriz encontre-se no caso acima ele multiplica a linha por -1
      if(inverte){
        for(int j = 0 ; j < linha ; j++){
          A[i][j] *= -1;
          I[i][j] *= -1;
        }
        cout << "Linha" << i+1 << " *= -1";
      }
    }

  }

  // Opera linhas
  void operaLinhas(int recebe, int opera, float escalar){
    // Se o escalar é diferente de 0
    if(escalar != 0){
      // O algoritmo soma as linhas multiplicadas por um escalar
      for(int i = 0 ; i < linha ; i++){
        A[recebe][i] += A[opera][i]*escalar;
        I[recebe][i] += I[opera][i]*escalar;
      }
      cout << "Linha" << recebe+1 << " += Linha" << opera+1 << " * " << escalar;
    // Se o escalar é igual a 0
    }else{
      // O algoritmo simplesmente soma as linhas
      for(int i = 0 ; i < linha ; i++){
        A[recebe][i] -=  A[opera][i];
        I[recebe][i] -= I[opera][i];
      }
       cout << "Linha" << recebe+1 << " -= Linha" << opera+1;
    }
  }

  // Verifica se a matriz A tornou-se a indentidade
  bool EI(){
    bool e = true;
    // Percorre a matriz
    for(int i = 0 ; i < linha ; i++){
      for(int j = 0 ; j < linha ; j++){
        // Verifica se os valores da diagonal são 1
        if(i == j){
          if(A[i][j] != 1){
            e = false;
            break;
          }
        // E verifica se os valores dora da diagonal são 0
        }else{
          if(A[i][j] != 0){
            e = false;
            break;
          }
        }
      }
    } 
    return e;
  }
};

int main(){
  // Instancia a classe
  Matriz m;
  cout << "inicial";
  m.mostra();
  m.inverte();
}