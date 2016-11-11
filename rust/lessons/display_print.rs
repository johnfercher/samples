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
 *  fmt::Debug imprime muitas coisas além da informação necessária,
 *  por isso, pode-se implementar no módulo std::fmt um método para
 *  conhecer e imprimir seu novo tipo de dados.
**/

// (C-Like include). Inclui o módulo responsável por imprimir valores 
use std::fmt;

// Estrutura que define um ponto no R^2
#[derive(Debug)]
struct Square {
    x: f64,
    y: f64,
}

// Implementação do println! para Point2
impl fmt::Display for Square {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        // Não pode ter ; no final
        write!(f, "x: {}, y: {}", self.x, self.y)
    }
}

fn main (){
    let point_a = Square { x: 42.0, y: 42.0 };
    println!("Debug: {:?}", point_a);
    println!("Display: {}", point_a);
}