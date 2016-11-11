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
 *  Existem três tipos de estruturas:
 *      Estruturas Tuplas, que são basicamente tuplas nomeadas
 *      Estruturas clássicas de C
 *      Estruturas unitárias, sem campos, uteis para programação genérica
**/

// Estrutura unitária
struct Nil;

// Estrutura Tupla
struct Pair(i32, i32);

// Estrutura com dois campos
#[derive(Debug)]
struct Point {
    x: f32,
    y: f32,
}

// Estrutura que utiliza outras estruturas
#[derive(Debug)]
#[allow(dead_code)]
struct Rectangle {
    top: Point,
    bottom: Point,
}

fn main() {
    // Criando a estrutura Point
    let point: Point = Point { x: 1.1, y: 1.2 };
    // Imprimindo a estrutura Point
    println!("{:?}", point);

    // Criando uma estrutura que utiliza outras structs (Rectangle)
    let rectangle: Rectangle = Rectangle {
        top: point,
        bottom: Point { x: 5.1, y: 7.7 },
    };
    // Imprimindo a estrutura Rectangle
    println!("{:?}", rectangle);
}