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


RUN_C_MM () {
    rm data/mm_clang.txt
    echo "C" >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 50 50 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 100 100 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 150 150 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 200 200 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 250 250 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt0 300 300 0` >> data/mm_clang.txt
    echo " " >> data/mm_clang.txt

    echo "C -O1" >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 50 50 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 100 100 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 150 150 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 200 200 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 250 250 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt1 300 300 0` >> data/mm_clang.txt
    echo " " >> data/mm_clang.txt

    echo "C -O2" >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 50 50 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 100 100 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 150 150 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 200 200 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 250 250 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt2 300 300 0` >> data/mm_clang.txt
    echo " " >> data/mm_clang.txt

    echo "C -O3" >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 50 50 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 100 100 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 150 150 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 200 200 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 250 250 0` >> data/mm_clang.txt
    echo `./benchmark/benchmark_opt0 ./clang/exercises/matrix_multiplier_opt3 300 300 0` >> data/mm_clang.txt
}

RUN_CPP_MM () {
    rm data/mm_cpp.txt
    echo "CPP" >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 50 50 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 100 100 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 150 150 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 200 200 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 250 250 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt0 300 300 0` >> data/mm_cpp.txt
    echo " " >> data/mm_cpp.txt

    echo "CPP -O1" >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 50 50 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 100 100 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 150 150 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 200 200 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 250 250 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt1 300 300 0` >> data/mm_cpp.txt
    echo " " >> data/mm_cpp.txt
    
    echo "CPP -O2" >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 50 50 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 100 100 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 150 150 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 200 200 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 250 250 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt2 300 300 0` >> data/mm_cpp.txt
    echo " " >> data/mm_cpp.txt

    echo "CPP -O3" >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 50 50 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 100 100 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 150 150 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 200 200 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 250 250 0` >> data/mm_cpp.txt
    echo `./benchmark/benchmark_opt0 ./cpp/exercises/matrix_multiplier_opt3 300 300 0` >> data/mm_cpp.txt
}

RUN_CSHARP_MM () {
    rm data/mm_csharp.txt
    echo "CSHARP" >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt0 50 50 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt0 100 100 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt0 150 150 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt0 200 200 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt0 250 250 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt0 300 300 0` >> data/mm_csharp.txt
    echo " " >> data/mm_csharp.txt

    echo "CSHARP -optimize" >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt1 50 50 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt1 100 100 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt1 150 150 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt1 200 200 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt1 250 250 0` >> data/mm_csharp.txt
    echo `./benchmark/benchmark_opt0 ./csharp/exercises/matrix_multiplier_opt1 300 300 0` >> data/mm_csharp.txt
}

RUN_RUST_MM () {
    rm data/mm_rust.txt
    echo "RUST" >> data/mm_rust.txt
    echo `./benchmark/benchmark_opt0 ./rust/exercises/matrix_multiplier/target/release/matrix_multiplier 50 50 0` >> data/mm_rust.txt
    echo `./benchmark/benchmark_opt0 ./rust/exercises/matrix_multiplier/target/release/matrix_multiplier 100 100 0` >> data/mm_rust.txt
    echo `./benchmark/benchmark_opt0 ./rust/exercises/matrix_multiplier/target/release/matrix_multiplier 150 150 0` >> data/mm_rust.txt
    echo `./benchmark/benchmark_opt0 ./rust/exercises/matrix_multiplier/target/release/matrix_multiplier 200 200 0` >> data/mm_rust.txt
    echo `./benchmark/benchmark_opt0 ./rust/exercises/matrix_multiplier/target/release/matrix_multiplier 250 250 0` >> data/mm_rust.txt
    echo `./benchmark/benchmark_opt0 ./rust/exercises/matrix_multiplier/target/release/matrix_multiplier 300 300 0` >> data/mm_rust.txt
}

RUN_LUA_MM () {
    rm data/mm_lua.txt
    echo "LUA" >> data/mm_lua.txt
    echo `./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 50 50` >> data/mm_lua.txt
    echo `./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 100 100` >> data/mm_lua.txt
    echo `./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 150 150` >> data/mm_lua.txt
    echo `./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 200 200` >> data/mm_lua.txt
    echo `./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 250 250` >> data/mm_lua.txt
    echo `./benchmark/benchmark_opt0 lua lua/exercises/matrix_multiplier.lua 300 300` >> data/mm_lua.txt
}

RUN_PHP_MM () {
    rm data/mm_php.txt
    echo "PHP" >> data/mm_php.txt
    echo `./benchmark/benchmark_opt0 php php/exercises/matrix_multiplier.php 50 50` >> data/mm_php.txt
    echo `./benchmark/benchmark_opt0 php php/exercises/matrix_multiplier.php 100 100` >> data/mm_php.txt
    echo `./benchmark/benchmark_opt0 php php/exercises/matrix_multiplier.php 150 150` >> data/mm_php.txt
    echo `./benchmark/benchmark_opt0 php php/exercises/matrix_multiplier.php 200 200` >> data/mm_php.txt
    echo `./benchmark/benchmark_opt0 php php/exercises/matrix_multiplier.php 250 250` >> data/mm_php.txt
    echo `./benchmark/benchmark_opt0 php php/exercises/matrix_multiplier.php 300 300` >> data/mm_php.txt
}

RUN_JAVASCRIPT_MM () {
    rm data/mm_javascript.txt
    echo "JavaScript" >> data/mm_javascript.txt
    echo `./benchmark/benchmark_opt0 node javascript/exercises/matrix_multiplier.js 50 50` >> data/mm_javascript.txt
    echo `./benchmark/benchmark_opt0 node javascript/exercises/matrix_multiplier.js 100 100` >> data/mm_javascript.txt
    echo `./benchmark/benchmark_opt0 node javascript/exercises/matrix_multiplier.js 150 150` >> data/mm_javascript.txt
    echo `./benchmark/benchmark_opt0 node javascript/exercises/matrix_multiplier.js 200 200` >> data/mm_javascript.txt
    echo `./benchmark/benchmark_opt0 node javascript/exercises/matrix_multiplier.js 250 250` >> data/mm_javascript.txt
    echo `./benchmark/benchmark_opt0 node javascript/exercises/matrix_multiplier.js 300 300` >> data/mm_javascript.txt
}

RUN_JAVA_MM () {
    rm data/mm_java.txt
    echo "Java" >> data/mm_java.txt
    cd java/exercises
    echo `./../../benchmark/benchmark_opt0 java matrix_multiplier 50 50` >> ../../data/mm_java.txt
    echo `./../../benchmark/benchmark_opt0 java matrix_multiplier 100 100` >> ../../data/mm_java.txt
    echo `./../../benchmark/benchmark_opt0 java matrix_multiplier 150 150` >> ../../data/mm_java.txt
    echo `./../../benchmark/benchmark_opt0 java matrix_multiplier 200 200` >> ../../data/mm_java.txt
    echo `./../../benchmark/benchmark_opt0 java matrix_multiplier 250 250` >> ../../data/mm_java.txt
    echo `./../../benchmark/benchmark_opt0 java matrix_multiplier 300 300` >> ../../data/mm_java.txt
    cd ..
    cd ..
}


RUN_MM () {
    echo "C";
    RUN_C_MM;

    echo "CPP";
    RUN_CPP_MM;

    echo "CSHARP";
    RUN_CSHARP_MM;

    echo "Rust"
    RUN_RUST_MM;

    echo "Lua";
    RUN_LUA_MM;

    echo "PHP";
    RUN_PHP_MM;

    echo "Java"
    RUN_JAVA_MM;

    echo "JavaScript"
    RUN_JAVASCRIPT_MM
}

RUN () {
    RUN_MM;
}

RUN;