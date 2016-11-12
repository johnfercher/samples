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
using System;

//! class which defines a matrix 
class Matrix{
    public int rows;                                        //! number of lines	
    public int cols;                                        //! number of columns
    public float[][] M;                                     //! matrix

    //! method which allocates a matrix dynamically in memory
    private void alloc() {
        M = new float[rows][];                              //! allocates an array of pointers of float (line)
        for(int i = 0 ; i < rows ; i++){                    //! walks through the array of pointers, allocating an array of floats
            M[i] = new float[cols];
        }
    }

    public Matrix(int r, int c) {
        rows = r;
        cols = c;

        alloc();
    }

    //! method which fill a matrix with random values
    public void fill() {
        Random rnd = new Random();                              //! initializes the random numbers
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols ; j++){
                M[i][j] = rnd.Next(1, 9);
            }
        }
    }

    //! method which prints a matrix
    public void print() {
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){ 
                System.Console.Write(M[i][j] + " ");
            }
            System.Console.Write("\n");
        }
    }
}

class Core{
    //! function which multiply two matrix
    public static Matrix multiply_matrix(Matrix R, Matrix A, Matrix B){
        float hold = 0;

        for(int i = 0 ; i < A.rows ; i++){                      //! multiply line of A with column of B
            for(int j = 0 ; j < B.cols ; j++){
                hold = 0;                                       //! variable which keeps the sum of multiplications 

                for(int k = 0 ; k < A.cols ; k++){
                    hold += A.M[i][k] * B.M[k][j];
                }
                
                R.M[i][j] = hold;
            }
        }

        return R;
    }

    public static void Main(string[] args) {
        int i, j;                                               //! number of lines and columns

        i = Int32.Parse(args[0]);
        j = Int32.Parse(args[1]);

        Matrix A = new Matrix(i, j);                            //! matrix A
        Matrix B = new Matrix(j, i);                            //! matrix B
        Matrix R = new Matrix(i, i);                            //! matriz R = A X B

        A.fill();
        B.fill();

        multiply_matrix(R, A, B);                               //! the matrix A and B are multipliable

        //A.print();
        //B.print();
        //R.print();
    }
}