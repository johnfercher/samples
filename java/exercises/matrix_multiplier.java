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

import java.util.Random;

//! class which defines multiplication of matrices 
public class matrix_multiplier {
    private static int rows, cols;                          //! number of lines and columns
    private static float [][]A;                             
    private static float [][]B;
    private static float [][]R;

    private static Random randomGenerator;

    //! method which fill a matrix with random values
    public static void fill_matrices(){
        for(int i = 0 ; i < rows; i++){
            for(int j = 0 ; j < cols ; j++){
                A[i][j] = randomGenerator.nextInt(10);
                B[i][j] = randomGenerator.nextInt(10);
            }
        }
    }

    //! function which multiply two matrix
    public static void multiply_matrices(){
        float hold = 0;

        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols ; j++){
                hold = 0;

                for(int k = 0 ; k < rows ; k++){
                    hold += A[i][k] * B[k][j];
                }

                R[i][j] = hold;
            } 
        }
    }

    //! method which prints a matrix
    public static void print_matrices(){
        for(int i = 0 ; i < rows; i++){
            for(int j = 0 ; j < cols ; j++){
                System.out.print("\t" + A[i][j]);
            }
            System.out.println("");
        }

        for(int i = 0 ; i < rows; i++){
            for(int j = 0 ; j < cols ; j++){
                System.out.print("\t" + B[i][j]);
            }
            System.out.println("");
        }

        for(int i = 0 ; i < rows; i++){
            for(int j = 0 ; j < cols ; j++){
                System.out.print("\t" + R[i][j]);
            }
            System.out.println("");
        }
    }

    public static void main(String[] args) {
        rows = Integer.parseInt(args[0]);
        cols = Integer.parseInt(args[1]);    

        A = new float[rows][cols];
        B = new float[cols][rows];
        R = new float[rows][rows];

        randomGenerator = new Random();

        fill_matrices();
        multiply_matrices();
        //print_matrices();
    }
}