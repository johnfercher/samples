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

-- function which allocates a matrix dynamically in memory
function alloc_matrix (rows, cols)
    local A = {}                                        -- create a table

    for i = 1, rows do                                  -- foreach cols
        A[i] = {}                                       -- add a table in the table, matrix -> array of array
        for j = 1, cols do                              
            A[i][j] = math.random(0, 9) + 0.5           -- added a random number between 0 and 9
        end
    end
    
    return A
end

-- function which prints a matrix
function print_matrix (A)
    for i = 1, #A do                                    -- i = 1 to sizeof(A)
        for j = 1, #A[i] do                             -- j = 1 to sizeof(A[i])
            io.write(A[i][j] .. "\t")
        end
        io.write("\n")
    end
end

-- function which multiply two matrix
function multiply_matrix (A, B)
    R = alloc_matrix(I, I);                             -- allocates a matrix of response in the final shape

    for i = 1, I do                                     -- multiply line of A with column of B
        for j = 1, I do                 
            hold = 0                                    -- variable which keeps the sum of multiplications
            for k = 1, J do
                hold = hold + A[i][k]*B[k][j]
            end
            R[i][j] = hold; 
        end
    end

    return R
end


math.randomseed(os.time())                              -- initializes the random numbers

I = arg[1];
J = arg[2];

A = alloc_matrix(I, J)                                  -- allocates matrix A !! A[i][j] !!
--print_matrix(A)

B = alloc_matrix(J, I)                                  -- allocates matrix B !! B[]j[i] !!
--print_matrix(B)

R = multiply_matrix(A, B, I, J)                        -- the matrix A and B are multipliable
--print_matrix(R)


