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
    let mut a: Vec<u8> = Vec::new();
    a.push(1);
    a.push(2);
    a.push(3);

    println!("a: {:?}", a);

    let mut b = &mut a;
    b.push(5);

    println!("a: {:?}", a);
    //println!("b: {:?}", b);
}