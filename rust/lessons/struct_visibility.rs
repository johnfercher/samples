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

mod my {
    #[derive(Debug)]
    pub struct Test {               // pub for made the struct accessible
        pub i: u8,                  // pub for made the field accessible
        j: u8,                      // inaccessible 
    }

    impl Test {
        pub fn new() -> Test {      // accessible
            Test {
                i: 0,
                j: 0,
            }
        }

        fn test() {                 // inaccessible

        }
    }
}

use my::Test;                       // removes the necessite to call Test like my::Test

fn main() {
    let test: Test = Test::new();
}