#include "iostream"

using namespace std;

/*
  Array
    - Tipo abstrato de dados TAD
    - Estrutura fundamental, pois todos os outros partem dele
    - Tamanho fixo**
    - É guardado um ponteiro com a posição inicial do array e o tamanho esse array
    - Posições consecutivas em memória
*/

int main() {
  // Tamanho fixo
  int arrayFixo[5] = {0, 1, 2, 3, 4};
  for(unsigned int i = 0 ; i < 5 ; i++){
      cout << arrayFixo[i] << endl;
  }

  // Tamanho variável
  int *arrayDinamico;
  arrayDinamico = new int[5];
  for(unsigned int i = 0 ; i < 5 ; i++){
      cout << arrayDinamico[i] << endl;
  }
}
