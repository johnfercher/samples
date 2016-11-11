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
    println!("1 + 2 = {}", 1.0 + 2.0);                  // Soma
    println!("1 - 2 = {}", 1.0 - 2.0);                  // Subtração
    println!("2 * 2 = {}", 2.0 * 2.0);                  // Multiplicação
    println!("3 / 2 = {}", 3.0 / 2.0);                  // Divisão
    println!("4 % 2 = {}", 4.0 % 2.0);                  // Resto da divisão

    println!("true AND false = {}", true && false);     // E
    println!("true OR false = {}", true || false);      // OU
    println!("NOT true = {}", !true);                   // Negando algo
}