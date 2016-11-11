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
    // Esse a está no escopo da função main
    let a = 1;

    {// Shadowing
        // Esse a está em um subescopo anônimo da main 
        let a = 2;
        // Esse print está no mesmo subescopo de a
        // Logo, imprime o a do subescopo
        println!("{}", a);
    }

    // Esse print está no escopo da função main
    // Logo, imprime o a da função main
    println!("{}", a);
}