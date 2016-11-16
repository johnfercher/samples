#!/usr/bin/php
<?php
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

// function which allocates a matrix dynamically in memory
function alloc_matrix($rows, $cols){
    $M = array();                                       // initializes the array
    
    for($i = 0 ; $i < $rows ; $i++){
        $M[$i] = array();                               // initializes the arrays in the main array
        for($j = 0 ; $j < $cols ; $j++){
            $M[$i][$j] = rand(0, 10);                   // set a random number
        }
    }

    return $M;
}

// function which prints a matrix
function print_matrix($M){
    for($i = 0 ; $i < sizeof($M) ; $i++){
        for($j = 0 ; $j < sizeof($M[$i]) ; $j++){
            echo $M[$i][$j] . " ";
        }
        echo "\n";
    }

    return $M;
}


// function which multiply two matrices
function multiply_matrix($A, $B){
    $R = alloc_matrix(sizeof($A), sizeof($B[0]));       // number of lines of $A and nubmer of rows of $b

    for($i = 0 ; $i < sizeof($A) ; $i++){
        for($j = 0 ; $j < sizeof($B[0]) ; $j++){
            $hold = 0;
            for($k = 0 ; $k < sizeof($A[0]) ; $k++){    // multiply
                $hold += $A[$i][$k] * $B[$k][$j];
            }
            $R[$i][$j] = $hold;
        }
    }

    return $R;
}

$I = $argv[1];
$J = $argv[2];

$A = alloc_matrix($I, $J);
$B = alloc_matrix($J, $I);

$R = multiply_matrix($A, $B);

//print_matrix($A);
//print_matrix($B);
//print_matrix($R);
?>
