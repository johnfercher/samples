package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

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
	return strings.TrimRight(text, "\n")
}

func isExit(input string) bool {
	return input == "exit()"
}

func main() {
	instructionsPrinter()
	stdinNumbersInterpreter := StdinNumbersInterpreter{}
	stdinOperationInterpreter := StdinOperationInterpreter{}

	for {
		input := readStdin()

		if isExit(input) {
			printExiting()
			break
		}

		operation, err := stdinOperationInterpreter.interpret(input)

		if err != nil {
			fmt.Println(err)
			continue
		}

		numbers := stdinNumbersInterpreter.interpret(input)
		result, err := operation(numbers[0], numbers[1])

		if err != nil {
			fmt.Println(err)
		} else {
			fmt.Printf("%f\n", result)
		}
	}
}
