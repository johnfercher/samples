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
    // Criando um array fixo de 5 posições de i32
    let array_a: [i32; 5] = [1, 2, 3, 4, 5];            // Iniciando as 5 posições
    // Criando um array fixo de 500 posições de i32
    let array_b: [i32; 500] = [0; 500];                 // Iniciando as 500 posições com 0

    // Imprimindo um valor
    println!("{}", array_a[0]);
    // Imprimindo o tamango do array
    println!("{}", array_b.len());
    // Imprimindo o valor da última posição de um array
    println!("{}", array_b[array_b.len()-1]);
}