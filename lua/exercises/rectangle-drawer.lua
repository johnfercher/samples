function draw (cols, rows)
    for i = 1, cols do
        for j = 1, rows do
            if i == 1 or j == 1 or i == cols or j == rows then
                io.write("* ")
            else
                io.write("  ")
            end
        end 
        io.write("\n")
    end
end

draw(6, 6)