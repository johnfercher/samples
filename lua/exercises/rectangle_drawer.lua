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