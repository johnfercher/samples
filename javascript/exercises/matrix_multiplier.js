/*
 *	MIT License
 *
 *	Copyright (c) 2016 Rafael Almeida
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

//! function which allocates a matrix dynamically in memory
function alloc_matrix(rows, cols) {
	var m = [];
	for (var i = 0; i < rows; i++) {
		m.push([]);
		for (var j = 0; j < cols; j++) {
			m[i][j] = Math.floor(Math.random()  * 10);
		}
	}
	return m;
}

//! function which prints a matrix
function print_matrix(matrix) {
	var str;
	for (var i = 0; i < matrix.length; i++) {
		str = "";
		for (var j = 0; j < matrix[i].length; j++) {
			str += matrix[i][j] + " ";
		}
		document.write(str + '<br>');
	}
	document.write('<br>');
	return matrix;
}

//! function which multiply two matrix
function multiply_matrix(a, b) {
	var r = alloc_matrix(a.length, b[0].length);
	for (var i = 0; i < a.length; i++) {
		for (var j = 0; j < b[0].length; j++) {
			var hold = 0;
			for (var k = 0; k < a[0].length; k++) {
				hold = hold + a[i][k] * b[k][j];
			}
			r[i][j] = hold;
		}
	}
	return r;
}

var i = parseInt(process.argv[2]);
var j = parseInt(process.argv[3]);

var matrixA = alloc_matrix(i, j);
var matrixB = alloc_matrix(j, i);
var matrixR = multiply_matrix(matrixA, matrixB);

//print_matrix(matrixA);
//print_matrix(matrixB);
//print_matrix(matrixR);