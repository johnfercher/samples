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
 *  std::fmt somente implementa a impressão para tipos de dados padrões
 *  para imprimir tipos criados é necessário implementação
 *  
 *  std::Debug facilita a implementação 
**/

// Cria uma estrutura com um inteiro, que deriva de Debug
#[derive(Debug)]
struct Structure(i32);

// Cria uma estrutura com uma estrutura dentro, que também deriva de Debug
#[derive(Debug)]
struct Deep(Structure);

fn main() {
    // {:?} imprime varios tipos, simples e criado 
    println!("A resposta para vida, o univero e tudo mais: {:?}", 42);

    // {:?} funciona da mesma forma
    println!("I have a {0:?}, I have an {1:?}. Annn, {0:?}{1:?}.",
             "Apple",
             "Pen");

    // Imprimindo a estrutura
    println!("Now {:?} will print!", Structure(3));

    // The problem with `derive` is there is no control over how
    // the results look. What if I want this to just show a `7`?
    println!("Now {:?} will print!", Deep(Structure(7)));
}