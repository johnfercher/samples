#!/bin/bash
#
#	MIT License
#
#	Copyright (c) 2016 Johnathan Fercher
#
#	Permission is hereby granted, free of charge, to any person obtaining a copy
#	of this software and associated documentation files (the "Software"), to deal
#	in the Software without restriction, including without limitation the rights
#	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#	copies of the Software, and to permit persons to whom the Software is
#	furnished to do so, subject to the following conditions:
#
#	The above copyright notice and this permission notice shall be included in all
#	copies or substantial portions of the Software.
#

COMPILE_C () {
    cd clang/exercises/ 
    gcc matrix_multiplier.c -o matrix_multiplier_opt0
	gcc matrix_multiplier.c -o matrix_multiplier_opt1 -O1
	gcc matrix_multiplier.c -o matrix_multiplier_opt2 -O2
	gcc matrix_multiplier.c -o matrix_multiplier_opt3 -O3
    cd ..
    cd ..
}

COMPILE_CPP () {
    cd cpp/exercises/
    g++ matrix_multiplier.cpp -o matrix_multiplier_opt0
	g++ matrix_multiplier.cpp -o matrix_multiplier_opt1 -O1
	g++ matrix_multiplier.cpp -o matrix_multiplier_opt2 -O2
	g++ matrix_multiplier.cpp -o matrix_multiplier_opt3 -O3
    cd ..
    cd ..
}

COMPILE_CSHARP () {
    cd csharp/exercises/
    mcs matrix_multiplier.cs
    cd ..
    cd ..
}

COMPILE_RUST () {
    cd rust/exercises/
    rustc matrix_multiplier.rs
    cd ..
    cd ..
}

COMPILE_BENCHMARK () {
    cd benchmark
    g++ main.cpp -o benchmark_opt0
    cd ..
}

COMPILE () {
    COMPILE_C;
    COMPILE_CPP;
    COMPILE_CSHARP;
    COMPILE_RUST;
    COMPILE_BENCHMARK;
}

COMPILE;
	