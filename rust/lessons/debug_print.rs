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

/*
 *  std::fmt only implements the print for default data types
 *  to print new data types you must implements by your own
 *  
 *  std::Debug makes easier the implementation 
**/

// creates a struct with one integer, which derives from Debug
#[derive(Debug)]
struct Structure(i32);

// creates a struct with another struct inside, which also derives from Debug
#[derive(Debug)]
struct Deep(Structure);

fn main() {
    // {:?} prints various datatypes, simple and created. 
    println!("A resposta para vida, o univero e tudo mais: {:?}", 42);

    // {:?} works with the same way
    println!("I have a {0:?}, I have an {1:?}. Annn, {0:?}{1:?}.",
             "Apple",
             "Pen");

    // prints a struct
    println!("Now {:?} will print!", Structure(3));

    //! prints a struct with another struct inside
    println!("Now {:?} will print!", Deep(Structure(7)));
}