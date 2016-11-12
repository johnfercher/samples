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

#include "stdio.h"
#include "stdlib.h"

//! struct which defines a matrix 
struct Matrix{
	int *rows;													//! number of lines	
	int *cols;													//! number of columns
	float **M;													//! matrix
};

//! function which allocates a matrix dynamically in memory
void alloc_matrix(int *rows, int *cols, struct Matrix *A){
	int i, j;

	A->cols = cols;
	A->rows = rows;
	
	A->M = (float**)malloc(*(A->rows) * sizeof(float*));		//! allocates an array of pointers of float (line)
	
	for(i = 0 ; i < *(A->rows) ; i++){							//! walks through the array of pointers, allocating an array of floats
		A->M[i] = (float*)malloc(*(A->cols) * sizeof(float*));
	}
}

//! function which fill a matrix with random values
void fill_matrix(struct Matrix *A){
	int i, j;

	for(i = 0 ; i < *(A->rows) ; i++){							
		for(j = 0 ; j < *(A->cols) ; j++){
			A->M[i][j] = rand() % 10;
		}
	}
}

//! function which prints a matrix
void print_matrix(struct Matrix *A){
	int i, j;

	for (i = 0; i < *(A->rows); i++){
  		for (j = 0; j < *(A->cols); j++){ 
			printf("%f ", A->M[i][j]);
		}
		printf("\n");
	}
}

//! function which multiply two matrix
void multiply_matrix(struct Matrix *R, struct Matrix *A, struct Matrix *B){
	int i, j, k;
	float hold = 0;
	
	alloc_matrix((A->rows), (B->cols), R);						//! allocates a matrix of response in the final shape

	for(i = 0 ; i < *(A->rows) ; i++){							//! multiply line of A with column of B
		for(j = 0 ; j < *(B->cols) ; j++){
			hold = 0; 											//! variable which keeps the sum of multiplications 

			for(k = 0 ; k < *(A->cols) ; k++){
				hold += A->M[i][k] * B->M[k][j];
			}

			R->M[i][j] = hold; 
		}
	}
}

int main(int argc, char *argv[]){
	srand(time(NULL));											//! initializes the random numbers
	int i, j;													//! number of lines and columns
	
	struct Matrix A;											//! matrix A
	struct Matrix B;											//! matriz B
	struct Matrix R;											//! matriz R = A X B

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	
	alloc_matrix(&i, &j, &A);									//! allocates matrix A  !! A[i][j] !!
	fill_matrix(&A);
	print_matrix(&A);

	alloc_matrix(&j, &i, &B);									//! allocates Matrix B	!! B[j][i] !!
	fill_matrix(&B);
	print_matrix(&B);

	multiply_matrix(&R, &A, &B);								//! the matrix A and B are multipliable
	print_matrix(&R);
}
