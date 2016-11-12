--MIT License
--
--Copyright (c) 2016 Johnathan Fercher
--
--Permission is hereby granted, free of charge, to any person obtaining a copy
--of this software and associated documentation files (the "Software"), to deal
--in the Software without restriction, including without limitation the rights
--to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
--copies of the Software, and to permit persons to whom the Software is
--furnished to do so, subject to the following conditions:
--
--The above copyright notice and this permission notice shall be included in all
--copies or substantial portions of the Software.


-- alloc the matrix
function alloc_matrix (cols, rows)
    local A = {}                                        -- create a table

    -- initializes
    for i = 1, cols do                                  -- foreach cols
        A[i] = {}                                       -- add a table in the table, matrix -> array of array
        for j = 1, rows do                              
            A[i][j] = math.random(0, 9)                 -- added a random number between 0 and 9
        end
    end
    
    return A
end

-- print any matrix
function print_matrix (A)
    -- initializes
    for i = 1, #A do                                    -- i = 1 to sizeof(A)
        for j = 1, #A[i] do                             -- j = 1 to sizeof(A[i])
            io.write(A[i][j] .. "\t")
        end
        io.write("\n")
    end
end

-- multipliy two any matrix
function multipliy_matrix (A, B)
    R = {}
    local less = 0 
    
    -- if the matrix A and B can be multiplied
    if I < J then less = I else less = J end

    -- initializes
    for i = 1, less do
        R[i] = {}
        for j = 1, less do
            R[i][j] = 0
        end
    end

    -- multiply
    for i = 1, less do
        for j = 1, less do
            hold = 0
            for k = 1, less do
                hold = hold + A[i][k]*B[k][j]
            end
            R[i][j] = hold; 
        end
    end

    return R
end

-- initializes the random numbers
math.randomseed(os.time())

-- calc I and J, that will respectively cols and rows from matrix A, and rows and cols from matrix B
I = math.random(2, 6)
J = math.random(2, 6)

A = alloc_matrix(I, J)
B = alloc_matrix(J, I)
R = multipliy_matrix(A, B)

print("matrix A")
print_matrix(A)

print("matrix B")
print_matrix(B)

print("matrix R")
print_matrix(R)

