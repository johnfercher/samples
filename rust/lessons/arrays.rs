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

fn main() {
    // creates an static array with 5 positions of i32
    let array_a: [i32; 5] = [1, 2, 3, 4, 5];                // initializes the 5 positions
    // creates an static array with 500 positions of i32
    let array_b: [i32; 500] = [0; 500];                     // initializes the 500 positions with 0s

    // prints the value at position 0 of array
    println!("{}", array_a[0]);
    // prints the size of array
    println!("{}", array_b.len());
    // prints the value of the last position of the array
    println!("{}", array_b[array_b.len()-1]);
}