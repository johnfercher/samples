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

RUN_C () {
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 50 50 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 100 100 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 150 150 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 200 200 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 250 250 0

    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 50 50 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 100 100 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 150 150 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 200 200 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 250 250 0

    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 50 50 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 100 100 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 150 150 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 200 200 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 250 250 0

    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 50 50 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 100 100 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 150 150 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 200 200 0
    ./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 250 250 0
}

RUN_CPP () {
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 50 50 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 100 100 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 150 150 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 200 200 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 250 250 0

    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 50 50 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 100 100 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 150 150 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 200 200 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 250 250 0

    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 50 50 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 100 100 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 150 150 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 200 200 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 250 250 0

    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 50 50 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 100 100 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 150 150 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 200 200 0
    ./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 250 250 0
}

RUN_CSHARP () {
    ./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier.exe 50 50 0
    ./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier.exe 100 100 0
    ./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier.exe 150 150 0
    ./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier.exe 200 200 0
    ./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier.exe 250 250 0
}

RUN_LUA () {
    ./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 50 50
    ./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 100 100
    ./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 150 150
    ./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 200 200
    ./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 250 250
}

RUN () {
    echo "C";
    RUN_C;
    echo " ";

    echo "CPP";
    RUN_CPP;
    echo " ";

    echo "CSHARP";
    RUN_CSHARP;
    echo " ";

    echo "Lua";
    RUN_LUA;
    echo " ";
}

RUN;