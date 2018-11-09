#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(size, array):
    sockTypeQtdDictionary = getSockTypeQtdDictionary(array)
    pairsQtd = getPairsQtd(sockTypeQtdDictionary)  
    
    return pairsQtd
    
def getPairsQtd(dictionary):
    qtds = [int(value[1] / 2) for value in dictionary.items() if value[1] > 1]
    
    total = 0
    
    for qtd in qtds:
        total += qtd
        
    return total
    
def getSockTypeQtdDictionary(array):
    typeQtdDictionary = dict()
    
    for element in array:       
        if element not in typeQtdDictionary.keys():
            typeQtdDictionary[element] = 1
        else:
            typeQtdDictionary[element] += 1
                  
    return typeQtdDictionary

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
