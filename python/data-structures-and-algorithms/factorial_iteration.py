def factorial(num):
    factorial = 1

    while num > 1:
        factorial = factorial*num
        num = num-1

    return factorial

print(factorial(4))