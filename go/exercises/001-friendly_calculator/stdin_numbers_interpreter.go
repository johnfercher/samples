package main

import (
	"regexp"
	"strconv"
)

type StdinNumbersInterpreter struct {
}

func (i StdinNumbersInterpreter) interpret(input string) []float64 {
	numbers_string := regexp.MustCompile(`\s?[+\-*/]\s?`).Split(input, -1)

	numbers := make([]float64, len(numbers_string))

	for index, number_string := range numbers_string {
		value, err := strconv.ParseFloat(number_string, 64)

		if err == nil {
			numbers[index] = value
		}
	}

	return numbers
}
