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
 * Implemetando por macros
 * Definido em std::fmt
**/

fn main() -> (){
    // O valor 22 entrará nos {}
    println!("{} days", 22);                            

    // O valor "author" entrará em {0} e o valor "Dennis Ritchie" entrará em {1}
    println!("{0}: {1}", "author", "Dennis Ritchie");       

    // O valor "author" entrará em {author} e o valor "Bjarne Stroustrup" entrará em {name}
    println!("{author}: {name}", author="author", name="Bjarne Stroustrup");

    // Os valores serão impressos em binário
    println!("So existem {:b} tipos de pessoas, as que sabem binario e as que nao sabem.", 2);

    // Adiciona 5 espaços a esquerda
    println!("{number:>width$}", number=1, width=6);

    // Adiciona 5 zeros a esquerda
    println!("{number:>0width$}", number=1, width=6);

    // Adiciona 5 zeros a direita
    println!("{number:<0width$}", number=1, width=6);

    // Diz que a struct criada a baixo, implementará (será derivada) um método de debug padrão.
    // Cria-se uma struct que contém um único inteiro
    #[derive(Debug)]                    
    struct Structure(i32);

    // {:?} utilizado para fins de debug. Imprime qualquer coisa 
    println!("{:?}", Structure(3));
}