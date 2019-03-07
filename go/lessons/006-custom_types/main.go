package main

import "fmt"

type myint int

var a int
var b myint

func main() {
	a = 42
	b = 43

	fmt.Println(a)
	fmt.Println(b)

	a = int(b)
	fmt.Println(a)
}
