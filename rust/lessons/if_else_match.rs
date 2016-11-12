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
fn age() -> u8 {
    15
}

fn main() {
    let n = 10;


    if n < 0 {
        println!("Negativo");
    }else 
    if n > 0 {
        println!("Positivo");
    }else{
        println!("Zero");
    }

    if n == 10 { println!("10") } else { println!("!10") }

    let a =
        if n > 0 {
            "Positivo"
        }else
        if n < 0 {
            "Negativo"
        }else{
            "Zero"
        };

    println!("n = {}", a);



    match n {
        1 => println!("1"),
        2 | 3 => println!("2 ou 3"),
        4...9 => println!("4 a 9"),
        _ => println!("Nenhuma"),
    }



    let boolean = true;

    let binary =
        match boolean{
            false => 0,
            true => 1,
        };
    
     println!("{} -> {}", boolean, binary);



     let pair = (1, 0);

     match pair {
         (1, 0) | (0, 1) => println!("base canonica"),
         _ => println!("nao e base canonica"),
     }



     match age() {
         15 => println!("15"),
         _ => println!("!15"),
     }
}