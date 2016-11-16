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

use std::env;

#[allow(dead_code)]
#[derive(Debug)]                                            // derives from debug to printe the matrix with {:?} 
struct Matrix {                                             // struct which defines a matrix
    pub rows: usize,                                        // number os lines
    pub cols: usize,                                        // number of columns
    pub m: Vec<Vec<f32>>,                                  
}

impl Matrix {
    pub fn new(i_rows: usize, j_cols: usize) -> Matrix {              // constructor
        let mut v: Vec<Vec<f32>> = Vec::new();
        
        for i in 0..i_rows {
            let mut e: Vec<f32> = Vec::new();   

            for j in 0..j_cols {
                e.push((i + j) as f32);
            }   

            v.push(e);
        }

        Matrix {                                            // return the matrix
            rows: i_rows,
            cols: j_cols,
            m: v,
        }
    }
}

// borrow two matrices and returns the multiplication between them
fn multiply_matrix(a: &Matrix, b: &Matrix) -> Matrix {      
    let mut hold;
    let mut r = Matrix::new(a.rows, b.cols);                
    
    for i in 0..a.rows {
        for j in 0..b.cols {
            hold = 0.0;
            
            for k in 0..a.cols {
                hold += a.m[i][k] * b.m[k][j];
            }
            
            r.m[i][j] = hold;
        }
    }

    return r
}

fn main() {
    let args: Vec<_> = env::args().collect();           // get the parameters from terminal

    let i: usize = args[1].parse::<usize>().unwrap();   // convert them (string) to usize
    let j: usize = args[2].parse::<usize>().unwrap();   // convert them (string) to usize

    let a: Matrix = Matrix::new(i, j);
    let b: Matrix = Matrix::new(j, i);
    let r = multiply_matrix(&a, &b);

    //println!("{:?}", a);
    //println!("{:?}", b);
    //println!("{:?}", r);
}