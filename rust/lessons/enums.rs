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

// Criando um enum para definir um país
#![allow(dead_code)]                        // Remove os warning de variaveis não utilizadas
enum Country {
    USA,
    BRA,
    ESP,
}

fn example_use_enum() -> () {
    use Country::*;

    let country: Country = BRA;

    // match -> Switch
    match country {
        USA => println!("Hi"),
        BRA => println!("Oi"),
        ESP => println!("Hola"),
    }
}

fn main() {
    // Cria um enum
    let country: Country = Country::USA;

    // match -> Switch
    match country {
        Country::USA => println!("Hi"),
        Country::BRA => println!("Oi"),
        Country::ESP => println!("Hola"),
    }

    example_use_enum();
}