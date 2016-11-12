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
    let mut a = 0;
    loop {  // while true
        if(a > 2){
            break;
        }
        println!("a = {}", a);
        a += 1;
    }

    let mut b = 0;
    'row: loop {
        'col: loop {
            if(b > 2){ 
                // breaks to loop row
                break 'row;
            }
            println!("b = {}", b);
            b += 1;
        }
    }

    let mut c = 0;
    while c < 3 {
        println!("c = {}", c);
        c += 1;
    }

    for d in 0..3 {
        println!("d = {}", d);
    }
}