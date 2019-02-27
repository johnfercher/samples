package main

import "fmt"

var x = 40
var z int

func main() {
	y := 41
	fmt.Println(y)
	foo()
	fmt.Println(z)
}

func foo() {
	fmt.Println(x)
}
