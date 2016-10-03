#include "stdio.h"
#include "stdlib.h"

void imprimeMatriz(int **matriz, int n_linhas, int n_colunas){
	int i, j;
	for (i = 0; i < n_linhas; i++){
  		for (j = 0; j < n_colunas; j++){ 
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void alocaMatriz(int ***m, int n_linhas, int n_colunas){
	int i, j;
	int **matriz;

	matriz = (int**)malloc(n_linhas * sizeof(int*));

	for (i = 0; i < n_linhas; i++){
  		matriz[i] = (int*)malloc(n_colunas * sizeof(int));
		for (j = 0; j < n_colunas; j++){ 
			//matriz[i][j] = 2; 
			printf("Insira o valor[%d][%d]\n", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	*m = matriz; 
}

void inicializaMatriz(int ***m, int n_linhas, int n_colunas){
	int i, j;
	int **matriz;

	matriz = (int**)malloc(n_linhas * sizeof(int*));

	for (i = 0; i < n_linhas; i++){
  		matriz[i] = (int*)malloc(n_colunas * sizeof(int));
		for (j = 0; j < n_colunas; j++){ 
			matriz[i][j] = 0; 
		}
	}

	*m = matriz; 
}

void multiplicaMatriz(int **matriz1, int n_linhas1, int n_colunas1, int **matriz2, int n_linhas2, int n_colunas2){
	//if(n_colunas1 == n_linhas2){
	int i, j, k, acumula;
	int **matrizR, n_linhasR = n_linhas1, n_colunasR = n_colunas2;

	inicializaMatriz(&matrizR, n_linhasR, n_colunasR);

	for(i = 0 ; i < n_linhasR ; i++){
		for(j = 0 ; j < n_colunasR ; j++){
			acumula = 0; 
	       	for(k = 0 ; k < n_colunasR ; k++){
	       		acumula += matriz1[i][k]*matriz2[k][j];
	       	}
	       	matrizR[i][j] = acumula; 
	    }
	}

	imprimeMatriz(matriz1, n_linhas1, n_colunas1);
	printf(" *\n");
	imprimeMatriz(matriz2, n_linhas2, n_colunas2);
	printf(" =\n");
	imprimeMatriz(matrizR, n_linhasR, n_colunasR);

}

int main(){
	int i,j; 
	int n_linhas1 = 3, n_colunas1 = 2, **matriz1;
	int n_linhas2 = 2, n_colunas2 = 2, **matriz2;

	printf("Matriz 1\n");
	alocaMatriz(&matriz1, n_linhas1, n_colunas1);

	printf("Matriz 2\n");
	alocaMatriz(&matriz2, n_linhas2, n_colunas2);

	multiplicaMatriz(matriz1, n_linhas1, n_colunas1, matriz2, n_linhas2, n_colunas2);
}
