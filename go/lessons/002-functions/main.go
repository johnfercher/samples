package main

import "fmt"

func main() {
	print_float(add(33.2, 54.2))
}

func print_float(a float32) {
	fmt.Printf("%f", a)
}

func add(a float32, b float32) float32 {
	return a + b
}
