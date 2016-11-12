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

fn draw_rectangle(I: u8, J: u8) -> () {
    for i in 0..I {
        for j in 0..J {
            if i == 0 || j == 0 || i == I-1 || j == J-1 {
                print!("* ");
            }else{
                print!("  ");
            }
        }
        println!("");
    }
}

fn main() {
    let i = 3;                                                  // number of lines
    let j = 6;                                                  // number of columns

    draw_rectangle(i, j);
}