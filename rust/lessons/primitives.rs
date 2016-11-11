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
 *  Rust é "dinamica" e estatica tipada
 *
 *  Pode-se declarar um inteiro como:
 *  let my_int; ... my_int = 8;         (Dinamico)
 *  let my_int = 8;                     (Dinamico)
 *  let my_int: i32;                    ("Estático")
 *
 *  Naturalmente todos os tipos de dados são estático
 *  uma vez declarado -> let a = 32; não é possível mudar.
 *  para habilitar essa modificação é necessário utilizar a
 *  tag mut. let mut a = 32;
**/

fn main() {
    let logical_a = true;
    let logical_b: bool;
    let logical_c: bool = true;
    let mut logical_d: bool = true;

    let float_a = 1.0;
    let float_b: f64;
    let float_c: f64 = 1.0;
    let mut float_d: f64 = 1.0;

    let int: i32 = 1;
    // ...

    float_d = 33.3;
    // ERRO: float_c = 33.3;
}