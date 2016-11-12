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

// receives two u8 and returns the bigger
fn return_max(a: u8, b: u8) -> u8 {
    if a > b {
        a
    }else{
        b
    }
}

// receives two u8 and prints the bigger, without any return
fn print_max(a: u8, b: u8) -> () {
    let mut low;
    if a > b {
        low = a;
    }else{
        low = b;
    }
    println!("{}", low);
}

fn main() {
    println!("{}", return_max(10, 50));
    print_max(10, 50);
}