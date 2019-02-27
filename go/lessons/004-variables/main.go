package main

import "fmt"

var x = 40

func main() {
	y := 41
	fmt.Println(y)
	foo()
}

func foo() {
	fmt.Println(x)
}
