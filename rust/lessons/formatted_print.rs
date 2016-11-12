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
 * implemented for macros
 * defined in std::fmt
**/

fn main() -> (){
    println!("{} days", 22);                            
    
    println!("{0}: {1}", "author", "Dennis Ritchie");       
    
    println!("{author}: {name}", author="author", name="Bjarne Stroustrup");

    println!("So existem {:b} tipos de pessoas, as que sabem binario e as que nao sabem.", 2);

    println!("{number:>width$}", number=1, width=6);

    println!("{number:>0width$}", number=1, width=6);

    println!("{number:<0width$}", number=1, width=6);

    #[derive(Debug)]                    
    struct Structure(i32);

    println!("{:?}", Structure(3));
}