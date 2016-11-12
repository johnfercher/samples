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

fn avg(notes: Vec<f32>) -> f32{
    let mut avg : f32 = 0.0;

    for i in 0..notes.len() {               // from 0 to number of elements in Vec
        avg += notes[i];
    }

    avg = avg / (notes.len() as f32);       // NOTE: notes.len() isn't a f32. So we ahve to casting to f32

    return avg;
}

fn main() {
    let mut notes: Vec<f32> = Vec::new();   // Vec of f32 which handle the notes
    let mut avg_note : f32;                 // avg of notes
    
    notes.push(8.0);
    notes.push(8.0);
    notes.push(6.0);
    notes.push(5.0);

    avg_note = avg(notes);

    println!("{}", avg_note);
}