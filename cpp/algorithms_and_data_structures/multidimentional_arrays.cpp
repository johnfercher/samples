#include "iostream"

using namespace std;

/*
  Multidimentional Array
    - Array de Arrays
    - Elementos sequenciais e arrays sequenciais
    - Tamanho fixo
    - A cache utiliza dessa disposição para otimizar iterações
*/

int main() {
  // Tamanho fixo
  int matrizFixa[2][2] = {0, 1, 2, 3};
  for(unsigned int i = 0 ; i < 2 ; i++){
    for(unsigned int j = 0 ; j < 2 ; j++){
      cout << matrizFixa[i][j] << " ";
    }
    cout << endl;
  }

  // Tamanho variável
  int **matrizDinamica;
  matrizDinamica = new int*[5];
  for(unsigned int i = 0 ; i < 5 ; i++){
    matrizDinamica[i] = new int[5];
  }

  for(unsigned int i = 0 ; i < 5 ; i++){
    for(unsigned int j = 0 ; j < 5 ; j++){
      cout << matrizDinamica[i][j] << " ";
    }
    cout << endl;
  }

  // Aloprando um pouco
  int ***matrizAloprada;
  matrizAloprada = new int**[3];
  for(unsigned int i = 0 ; i < 3 ; i++){
    matrizAloprada[i] = new int*[3];
  }

  for(unsigned int i = 0 ; i < 3 ; i++){
    for(unsigned int j = 0 ; j < 3 ; j++){
      matrizAloprada[i][j] = new int[3];
    }
  }

  for(unsigned int i = 0 ; i < 3 ; i++){
    for(unsigned int j = 0 ; j < 3 ; j++){
      for(unsigned int k = 0 ; k < 3 ; k++){
        cout << matrizAloprada[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl << endl;
  }
}
