package main

import (
	"bufio"
	"fmt"
	"os"
	"regexp"
	"strconv"
	"strings"
)

func add(a float64, b float64) float64 {
	return a + b
}

func subtract(a float64, b float64) float64 {
	return a - b
}

func multiply(a float64, b float64) float64 {
	return a * b
}

func divide(a float64, b float64) float64 {
	return a / b
}

func instructionsPrinter() {
	fmt.Println("Friendly Calculador exit() to exit")
	fmt.Println("Type your expression, like: 10 + 10")
}

func printExiting() {
	fmt.Println("Existing...")
}

func readStdin() string {
	var reader = bufio.NewReader(os.Stdin)
	text, _ := reader.ReadString('\n')
	return text
}

func isExit(input string) bool {
	return strings.TrimRight(input, "\n") == "exit()"
}

func operationInterpreter(input string) func(float64, float64) float64 {
	if strings.Contains(input, "+") {
		return add
	} else if strings.Contains(input, "-") {
		return subtract
	} else if strings.Contains(input, "*") {
		return multiply
	} else if strings.Contains(input, "/") {
		return divide
	}

	return add
}

func main() {
	instructionsPrinter()

	for {
		input := readStdin()

		operation := operationInterpreter(input)
		numbers := numbersInterpreter(input)

		fmt.Printf("%f\n", operation(numbers[0], numbers[1]))

		if isExit(input) {
			printExiting()
			break
		}
	}
}

func numbersInterpreter(input string) []float64 {
	numbers_string := regexp.MustCompile(`\s?[+\-*/]\s?`).Split(input, -1)

	numbers := make([]float64, len(numbers_string))

	for _, number_string := range numbers_string {
		value, err := strconv.ParseFloat(number_string, 64)

		if err == nil {
			print(value)
			numbers = append(numbers, value)
		}
	}

	return numbers
}
