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