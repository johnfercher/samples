package main

import (
	"errors"
	"strings"
)

type StdinOperationInterpreter struct {
}

func (i StdinOperationInterpreter) interpret(input string) (func(float64, float64) (float64, error), error) {
	if strings.Contains(input, "+") {
		return add, nil
	} else if strings.Contains(input, "-") {
		return subtract, nil
	} else if strings.Contains(input, "*") {
		return multiply, nil
	} else if strings.Contains(input, "/") {
		return divide, nil
	}

	return nil, errors.New("Operation not handled")
}
