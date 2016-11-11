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
    // Criando uma tupla
    let tuple = (32, 33.0, 'a', true);
    // Imprimindo um valor de uma tupla
    println!("{}", tuple.1);

    // Criando uma tupla de tuplas
    let tuple_of_tuples = ((20, 22), (true, 33.0), 'a');
    // Imprimindo uma tupla de tuplas
    println!("{:?}", tuple_of_tuples);
}