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
 *  fmt::Debug prints a lot of things beyond the useful information,
 *  to solve this, is possible implement in the module std:fmt a method to
 *  print the new data type.
**/

// (C-Like include). imports the module responsible for print values 
use std::fmt;

// struct which defines a point in R^2
#[derive(Debug)]
struct Square {
    x: f64,
    y: f64,
}

// implementation of println! for Point2
impl fmt::Display for Square {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        // can not have ; at the final
        write!(f, "x: {}, y: {}", self.x, self.y)
    }
}

fn main (){
    let point_a = Square { x: 42.0, y: 42.0 };
    println!("Debug: {:?}", point_a);
    println!("Display: {}", point_a);
}