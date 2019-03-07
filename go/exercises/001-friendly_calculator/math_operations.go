package main

import "errors"

func add(a float64, b float64) (float64, error) {
	return a + b, nil
}

func subtract(a float64, b float64) (float64, error) {
	return a - b, nil
}

func multiply(a float64, b float64) (float64, error) {
	return a * b, nil
}

func divide(a float64, b float64) (float64, error) {
	if b == 0 {
		return 0, errors.New("Cannot divide by zero")
	}

	return a / b, nil
}
