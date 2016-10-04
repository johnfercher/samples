-- alloc the matrix
function alloc_matrix (cols, rows)
    local A = {}
    
    for i = 1, cols do
        A[i] = {}
        for j = 1, rows do
            -- added a random number between 0 and 9
            A[i][j] = math.random(0, 9)
        end
    end
    
    return A
end

-- print any matrix
function print_matrix (A)
    -- i = 1 to sizeof(A)
    for i = 1, #A do
        -- j = 1 to sizeof(A[i])
        for j = 1, #A[i] do
            io.write(A[i][j] .. "\t")
        end
        io.write("\n")
    end
end

-- multipliy two any matrix
function multipliy_matrix (A, B)
    R = {}
    local less = 0 
    
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

