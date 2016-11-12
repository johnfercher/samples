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

//! class which defines a matrix 
class Matrix{
private:
    //! method which allocates a matrix dynamically in memory
    void alloc(){
        M = new float*[*rows];                                  //! allocates an array of pointers of float (line)

        for(int i = 0 ; i < *rows ; i++){						//! walks through the array of pointers, allocating an array of floats
            M[i] = new float[*cols];
        }
    }
public:
    int *rows;													//! number of lines	
	int *cols;													//! number of columns
    float **M;	                                                //! matrix
    
    Matrix(int *rows, int *cols){
        this->rows = rows;
        this->cols = cols;

        alloc();
    }

    //! method which fill a matrix with random values
    void fill(){
        for(int i = 0 ; i < *rows ; i++){							
            for(int j = 0 ; j < *cols ; j++){
                M[i][j] = rand() % 10;
            }
        }
    }

    //! method which prints a matrix
    void print(){
        for (int i = 0; i < *rows; i++){
            for (int j = 0; j < *cols; j++){ 
                std::cout << M[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

//! function which multiply two matrix
void multiply_matrix(Matrix *R, Matrix *A, Matrix *B){
	int i, j, k;
	float hold = 0;

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
    srand(time(NULL));                                          //! initializes the random numbers
    int i, j;                                                   //! number of lines and columns

    i = atoi(argv[1]);
    j = atoi(argv[2]);

    Matrix A(&i, &j);                                           //! matrix A
    Matrix B(&j, &i);                                           //! matrix B
    Matrix R(&i, &i);                                           //! matriz R = A X B

    A.fill();
    B.fill();

    multiply_matrix(&R, &A, &B);

    //A.print();
    //B.print();
    //R.print();
}