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

#[allow(non_camel_case_types)] // removes warnings from the new type be lowercase
type radian = f64;

type Degree = f64;

#[allow(overflowing_literals)] // removes warnings from conversions
fn main() {
    let pi = 3.1415926;
    let radians: radian = 1.0;
    let degrees: Degree;

    degrees = radians * 180.0/pi;

    println!("{} radians = {} degrees", radians, degrees);
    println!("{} degrees float = {} degrees int", degrees, degrees as u8);
}